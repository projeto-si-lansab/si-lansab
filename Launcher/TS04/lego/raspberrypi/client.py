import config

class Client():
    def __init__(self):
        self.socket = config.Socket().get_socket()
        self.socket.connect((config.LEGO_HOST, config.LEGO_PORT))
    
    def close(self):
        self.socket.close()
    
    def send(self, data):
        self.socket.send(data)
