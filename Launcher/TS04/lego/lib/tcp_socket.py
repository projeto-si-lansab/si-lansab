import socket

class TCPSocket:
    def get_socket(self):
        return socket.socket(socket.AF_INET, socket.SOCK_STREAM)