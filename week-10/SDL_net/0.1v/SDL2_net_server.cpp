#include <iostream>
#include <SDL.h>
#include <SDL_net.h>
#include <string>

int main(int argc, char * argv[]) {
  SDL_Init(SDL_INIT_EVERYTHING);
  SDLNet_Init();
  IPaddress ip;
  SDLNet_ResolveHost(&ip, NULL, 1234);
  TCPsocket server = SDLNet_TCP_Open(&ip);
  TCPsocket client;
  //std::string text;
  const char* text = "HALLO";
  while (1) {
    client = SDLNet_TCP_Accept(server);
    if (client) {
      //std::cin >> text;
      //SDLNet_TCP_Send(client, text.c_str(), text.length() + 1);
      SDLNet_TCP_Send(client, text, 100);
      char client_text[100];
      while (client_text[0] != 'q') {
        SDLNet_TCP_Recv(client, client_text, 100);
        std::cout << client_text << std::endl;
        SDLNet_TCP_Send(client, client_text, 100);
      }
      SDLNet_TCP_Close(client);
      break;
    }
  }
  SDL_Quit();
  return 0;
}