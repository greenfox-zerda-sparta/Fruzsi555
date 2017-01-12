#include <iostream>
#include <SDL.h>
#include <SDL_net.h>
#include <string>
#include <istream>

int main(int argc, char * argv[]) {
  SDL_Init(SDL_INIT_EVERYTHING);
  SDLNet_Init();
  IPaddress ip;
  SDLNet_ResolveHost(&ip, "127.0.0.1", 1234); //"10.27.6.221"
  TCPsocket client = SDLNet_TCP_Open(&ip);
  char text[100];
  SDLNet_TCP_Recv(client, text, 100);
  std::cout << text << std::endl;
  const char* client_text = "";
  while (client_text[0] != 'q') {
    //std::cout << "OLLE: ";
    std::string input;
    std::cin >> input;
    client_text = input.c_str();
    SDLNet_TCP_Send(client, client_text, 100);
  }
  SDLNet_TCP_Close(client);
  SDL_Quit();
  return 0;
}