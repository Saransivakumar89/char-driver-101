# char-driver-101

- A character driver that transfers data as byte by byte (character)

'''Examples :
    
    - /dev/tty (terminal)
    - /dev/uart
    - /dev/input/
    - /dev/custom_driver
'''

# Flow
'''
user-Application -> System calls -> VFS -> character Driver -> HW/SW Buffer
'''


