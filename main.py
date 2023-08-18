import serial

conection = serial.Serial('COM3', 9600)

while True:
    command = input('>> ')
    if command == 'a':
        print('Ligado')
        conection.write(b'a')
    elif command == 'b':
        print('Desligado')
        conection.write(b'b')
