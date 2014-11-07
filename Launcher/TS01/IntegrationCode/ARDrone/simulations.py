# coding: utf-8
import time
import json
import arDemo


data = {'RocketLaunch': 0,
        'RocketDestroy': 0,
        'ChangeState': 0,
        'comm_count':0}


class ConnectionMock():
    def __init__(self, data):
        self.data = data

    def recv(self, *args):
        if self.data['comm_count'] == 1:
            self.data['RocketLaunch'] = 1
        
        if self.data['comm_count'] % 5 == 0:
            self.data['ChangeState'] = 1
        else:
            self.data['ChangeState'] = 0

        self.data['comm_count'] += 1
        time.sleep(0.5)
        return json.dumps(self.data)

    def close(self, *args):
        pass


class SocketMock():

    def __init__(self, *args):
        pass

    def bind(self, *args):
        pass

    def listen(self, *args):
        pass

    def accept(self, *args):
        pass
        return ConnectionMock(data), 'Endereço mockado'


def mock_communications():
    arDemo.socket.socket = SocketMock


if __name__ == '__main__':
    mock_communications()
    arDemo.main()