webtalk_init -webtalk_dir /home/gderiu/AES2021/audio_lab_hwfir/audio_lab/audio_lab.sdk/webtalk
webtalk_register_client -client project
webtalk_add_data -client project -key date_generated -value "2021-12-02 11:52:59" -context "software_version_and_target_device"
webtalk_add_data -client project -key product_version -value "SDK v2019.1" -context "software_version_and_target_device"
webtalk_add_data -client project -key build_version -value "2019.1" -context "software_version_and_target_device"
webtalk_add_data -client project -key os_platform -value "amd64" -context "software_version_and_target_device"
webtalk_add_data -client project -key registration_id -value "" -context "software_version_and_target_device"
webtalk_add_data -client project -key tool_flow -value "SDK" -context "software_version_and_target_device"
webtalk_add_data -client project -key beta -value "false" -context "software_version_and_target_device"
webtalk_add_data -client project -key route_design -value "NA" -context "software_version_and_target_device"
webtalk_add_data -client project -key target_family -value "NA" -context "software_version_and_target_device"
webtalk_add_data -client project -key target_device -value "NA" -context "software_version_and_target_device"
webtalk_add_data -client project -key target_package -value "NA" -context "software_version_and_target_device"
webtalk_add_data -client project -key target_speed -value "NA" -context "software_version_and_target_device"
webtalk_add_data -client project -key random_id -value "5t3t95046hc371ord8kmpd1d0k" -context "software_version_and_target_device"
webtalk_add_data -client project -key project_id -value "2019.1_49" -context "software_version_and_target_device"
webtalk_add_data -client project -key project_iteration -value "49" -context "software_version_and_target_device"
webtalk_add_data -client project -key os_name -value "Ubuntu" -context "user_environment"
webtalk_add_data -client project -key os_release -value "Ubuntu 16.04.6 LTS" -context "user_environment"
webtalk_add_data -client project -key cpu_name -value "Intel(R) Core(TM) i7-8550U CPU @ 1.80GHz" -context "user_environment"
webtalk_add_data -client project -key cpu_speed -value "1089.353 MHz" -context "user_environment"
webtalk_add_data -client project -key total_processors -value "1" -context "user_environment"
webtalk_add_data -client project -key system_ram -value "16.673 GB" -context "user_environment"
webtalk_register_client -client sdk
webtalk_add_data -client sdk -key uid -value "1638438649000" -context "sdk\\\\bsp/1638438649000"
webtalk_add_data -client sdk -key hwid -value "1638271491000" -context "sdk\\\\bsp/1638438649000"
webtalk_add_data -client sdk -key os -value "standalone" -context "sdk\\\\bsp/1638438649000"
webtalk_add_data -client sdk -key apptemplate -value "hello_world" -context "sdk\\\\bsp/1638438649000"
webtalk_add_data -client sdk -key RecordType -value "BSPCreation" -context "sdk\\\\bsp/1638438649000"
webtalk_add_data -client sdk -key uid -value "1638438651000" -context "sdk\\\\application/1638438651000"
webtalk_add_data -client sdk -key hwid -value "1638271491000" -context "sdk\\\\application/1638438651000"
webtalk_add_data -client sdk -key bspid -value "1638438649000" -context "sdk\\\\application/1638438651000"
webtalk_add_data -client sdk -key newbsp -value "true" -context "sdk\\\\application/1638438651000"
webtalk_add_data -client sdk -key os -value "standalone" -context "sdk\\\\application/1638438651000"
webtalk_add_data -client sdk -key apptemplate -value "hello_world" -context "sdk\\\\application/1638438651000"
webtalk_add_data -client sdk -key RecordType -value "APPCreation" -context "sdk\\\\application/1638438651000"
webtalk_add_data -client sdk -key LangUsed -value "C" -context "sdk\\\\application/1638438651000"
webtalk_add_data -client sdk -key Procused -value "ps7_cortexa9" -context "sdk\\\\application/1638438651000"
webtalk_add_data -client sdk -key projSize -value "495.26953125" -context "sdk\\\\application/1638438651000"
webtalk_add_data -client sdk -key uid -value "NA" -context "sdk\\\\bsp/1638442379004"
webtalk_add_data -client sdk -key RecordType -value "ToolUsage" -context "sdk\\\\bsp/1638442379004"
webtalk_add_data -client sdk -key BootgenCount -value "0" -context "sdk\\\\bsp/1638442379004"
webtalk_add_data -client sdk -key DebugCount -value "0" -context "sdk\\\\bsp/1638442379004"
webtalk_add_data -client sdk -key PerfCount -value "0" -context "sdk\\\\bsp/1638442379004"
webtalk_add_data -client sdk -key FlashCount -value "0" -context "sdk\\\\bsp/1638442379004"
webtalk_add_data -client sdk -key CrossTriggCount -value "0" -context "sdk\\\\bsp/1638442379004"
webtalk_add_data -client sdk -key QemuDebugCount -value "0" -context "sdk\\\\bsp/1638442379004"
webtalk_transmit -clientid 1836749808 -regid "" -xml /home/gderiu/AES2021/audio_lab_hwfir/audio_lab/audio_lab.sdk/webtalk/usage_statistics_ext_sdk.xml -html /home/gderiu/AES2021/audio_lab_hwfir/audio_lab/audio_lab.sdk/webtalk/usage_statistics_ext_sdk.html -wdm /home/gderiu/AES2021/audio_lab_hwfir/audio_lab/audio_lab.sdk/webtalk/sdk_webtalk.wdm -intro "<H3>SDK Usage Report</H3><BR>"
webtalk_terminate
