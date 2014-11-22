import bluetooth

class BlueToothSocket:
    def get_socket(self):
        return bluetooth.BluetoothSocket(bluetooth.RFCOMM)