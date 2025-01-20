connect -url tcp:127.0.0.1:3121
source /home/gderiu/AES2021/audio_lab_hwfir/audio_lab/audio_lab.sdk/design_1_wrapper_hw_platform_0/ps7_init.tcl
targets -set -nocase -filter {name =~"APU*" && jtag_cable_name =~ "Digilent Zybo Z7 210351B0FD1FA"} -index 0
loadhw -hw /home/gderiu/AES2021/audio_lab_hwfir/audio_lab/audio_lab.sdk/design_1_wrapper_hw_platform_0/system.hdf -mem-ranges [list {0x40000000 0xbfffffff}]
configparams force-mem-access 1
targets -set -nocase -filter {name =~"APU*" && jtag_cable_name =~ "Digilent Zybo Z7 210351B0FD1FA"} -index 0
stop
ps7_init
ps7_post_config
targets -set -nocase -filter {name =~ "ARM*#0" && jtag_cable_name =~ "Digilent Zybo Z7 210351B0FD1FA"} -index 0
rst -processor
targets -set -nocase -filter {name =~ "ARM*#0" && jtag_cable_name =~ "Digilent Zybo Z7 210351B0FD1FA"} -index 0
dow /home/gderiu/AES2021/audio_lab_hwfir/audio_lab/audio_lab.sdk/test_fir/Debug/test_fir.elf
configparams force-mem-access 0
targets -set -nocase -filter {name =~ "ARM*#0" && jtag_cable_name =~ "Digilent Zybo Z7 210351B0FD1FA"} -index 0
con
