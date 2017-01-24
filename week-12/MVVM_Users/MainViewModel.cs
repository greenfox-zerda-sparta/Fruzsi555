using GalaSoft.MvvmLight;
using GalaSoft.MvvmLight.Command;
using System.Collections.ObjectModel;
using System;
using GalaSoft.MvvmLight.Messaging;
using System.Windows.Input;

namespace SimpleMVVM.ViewModel
{
    /// <summary>
    /// This class contains properties that the main View can data bind to.
    /// <para>
    /// Use the <strong>mvvminpc</strong> snippet to add bindable properties to this ViewModel.
    /// </para>
    /// <para>
    /// You can also use Blend to data bind with the tool's support.
    /// </para>
    /// <para>
    /// See http://www.galasoft.ch/mvvm
    /// </para>
    /// </summary>
    public class MainViewModel : ViewModelBase
    {
        private ObservableCollection<User> users = new ObservableCollection<User>();
        private User selectedUser;

        public ICommand LoadUsersCommand { get; private set; }

        public ObservableCollection<User> Users
        {
            get { return users; }
        }

        /// <summary>
        /// Initializes a new instance of the MainViewModel class.
        /// </summary>
        public MainViewModel()
        {
            LoadUsersCommand = new RelayCommand(LoadUsersCommandHandler);
        }

        public User SelectedUser
        {
            get { return selectedUser; }
            set {
                selectedUser = value;
                RaisePropertyChanged("SelectedUser");
            }
        }

        private void LoadUsersCommandHandler()
        {
            users = User.GenerateDummyUsers();
            this.RaisePropertyChanged(() => Users);
            Messenger.Default.Send<NotificationMessage>(new NotificationMessage("Users Loaded."));
        }
    }
}