# tsprfx
A small program that takes a piped text stream and prefix every line with localtime.

```gcc -o tsprfx tsprfx.c```

I used this to stamp time on snmpbulkwalk output for later processing, but wanted to keep timestamp from the get moment.<br><br>
Example:<br>
```
 snmpbulkwalk -Ot -v2c -cxxxx host 1.3.6.1.2.1.31.1.1.1 | tsprfx | /bin/gzip -c > saveforlaterprocess
```
```
...
1531377685 IF-MIB::ifLinkUpDownTrapEnable.32 = INTEGER: enabled(1)
1531377685 IF-MIB::ifLinkUpDownTrapEnable.33 = INTEGER: enabled(1)
1531377685 IF-MIB::ifLinkUpDownTrapEnable.34 = INTEGER: enabled(1)
1531377685 IF-MIB::ifHighSpeed.1 = Gauge32: 0
1531377685 IF-MIB::ifHighSpeed.2 = Gauge32: 0
1531377685 IF-MIB::ifHighSpeed.3 = Gauge32: 0
1531377685 IF-MIB::ifHighSpeed.4 = Gauge32: 10
...
```
