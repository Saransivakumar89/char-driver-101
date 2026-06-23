# char-driver-101

- A character driver that transfers data as byte by byte (character)

Examples :
    
    - /dev/tty (terminal)
    - /dev/uart
    - /dev/input/
    - /dev/custom_driver


# Flow
```
user-Application -> System calls -> VFS -> character Driver -> HW/SW Buffer
```

```
Major Number : tells the kernel which driver should handle operation on the file.
```

```
Minor Number : passed to the driver so it can identify which specific device is to be select/operate on.
```


