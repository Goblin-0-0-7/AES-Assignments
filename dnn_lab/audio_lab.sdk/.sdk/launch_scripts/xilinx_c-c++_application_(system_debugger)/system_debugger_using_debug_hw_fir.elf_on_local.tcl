connect -url tcp:127.0.0.1:3121
source D:/OneDrive/Studium/Auslandsstudium/Cagliari/Subjects/Advanced_Embedded_Systems/Labs/dnn_image_classification/audio_lab.sdk/design_1_wrapper_hw_platform_3/ps7_init.tcl
targets -set -nocase -filter {name =~"APU*" && jtag_cable_name =~ "Digilent Zybo Z7 210351B0FD4AA"} -index 0
loadhw -hw D:/OneDrive/Studium/Auslandsstudium/Cagliari/Subjects/Advanced_Embedded_Systems/Labs/dnn_image_classification/audio_lab.sdk/design_1_wrapper_hw_platform_3/system.hdf -mem-ranges [list {0x40000000 0xbfffffff}]
configparams force-mem-access 1
targets -set -nocase -filter {name =~"APU*" && jtag_cable_name =~ "Digilent Zybo Z7 210351B0FD4AA"} -index 0
stop
ps7_init
ps7_post_config
targets -set -nocase -filter {name =~ "ARM*#0" && jtag_cable_name =~ "Digilent Zybo Z7 210351B0FD4AA"} -index 0
rst -processor
targets -set -nocase -filter {name =~ "ARM*#0" && jtag_cable_name =~ "Digilent Zybo Z7 210351B0FD4AA"} -index 0
dow D:/OneDrive/Studium/Auslandsstudium/Cagliari/Subjects/Advanced_Embedded_Systems/Labs/dnn_image_classification/audio_lab.sdk/hw_fir/Debug/hw_fir.elf
configparams force-mem-access 0
bpadd -addr &main
