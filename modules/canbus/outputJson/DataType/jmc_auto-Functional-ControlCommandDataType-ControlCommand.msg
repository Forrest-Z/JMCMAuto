{
  "ShortName": "/jmc_auto/Functional/ControlCommandDataType/ControlCommand",
  "Namespace": "::",
  "Type": "STRUCTURE",
  "Subelements": [
    {
      "Name": "header",
      "Type": "/jmc_auto/header/Header"
    },
    {
      "Name": "steering_target",
      "Type": "/HuaweiMDC/ImplementationDataType/Double"
    },
    {
      "Name": "parking_brake",
      "Type": "/HuaweiMDC/ImplementationDataType/Bool"
    },
    {
      "Name": "speed",
      "Type": "/HuaweiMDC/ImplementationDataType/Double"
    },
    {
      "Name": "acceleration",
      "Type": "/HuaweiMDC/ImplementationDataType/Double"
    },
    {
      "Name": "reset_model",
      "Type": "/HuaweiMDC/ImplementationDataType/Bool"
    },
    {
      "Name": "engine_on_off",
      "Type": "/HuaweiMDC/ImplementationDataType/Bool"
    },
    {
      "Name": "trajectory_fraction",
      "Type": "/HuaweiMDC/ImplementationDataType/Double"
    },
    {
      "Name": "driving_mode",
      "Type": "/jmc_auto/Platform/ChassisDateType/DrivingMode"
    },
    {
      "Name": "gear_location",
      "Type": "/jmc_auto/Platform/ChassisDateType/GearPosition"
    },
    {
      "Name": "debug",
      "Type": "/jmc_auto/Functional/ControlCommandDataType/Debug"
    },
    {
      "Name": "signal",
      "Type": "/jmc_auto/vehicle_signal/VehicleSignal"
    },
    {
      "Name": "latency_stats",
      "Type": "/jmc_auto/Functional/ControlCommandDataType/LatencyStats"
    },
    {
      "Name": "pad_msg",
      "Type": "/jmc_auto/Functional/ControlCommandDataType/PadMessage"
    },
    {
      "Name": "engage_advice",
      "Type": "/jmc_auto/drive_state/EngageAdvice"
    },
    {
      "Name": "is_in_safe_mode",
      "Type": "/HuaweiMDC/ImplementationDataType/Bool"
    },
    {
      "Name": "steering_torque",
      "Type": "/HuaweiMDC/ImplementationDataType/Double"
    },
    {
      "Name": "PAM_ESP_Target_Gear_Request",
      "Type": "/HuaweiMDC/ImplementationDataType/Int32"
    },
    {
      "Name": "ACC_StandstillReq",
      "Type": "/HuaweiMDC/ImplementationDataType/Bool"
    },
    {
      "Name": "turnsignal",
      "Type": "/jmc_auto/Functional/ControlCommandDataType/TurnSignal"
    },
    {
      "Name": "throttle",
      "Type": "/HuaweiMDC/ImplementationDataType/Double"
    },
    {
      "Name": "brake",
      "Type": "/HuaweiMDC/ImplementationDataType/Double"
    },
    {
      "Name": "steering_rate",
      "Type": "/HuaweiMDC/ImplementationDataType/Double"
    },
    {
      "Name": "left_turn",
      "Type": "/HuaweiMDC/ImplementationDataType/Bool"
    },
    {
      "Name": "right_turn",
      "Type": "/HuaweiMDC/ImplementationDataType/Bool"
    },
    {
      "Name": "high_beam",
      "Type": "/HuaweiMDC/ImplementationDataType/Bool"
    },
    {
      "Name": "low_beam",
      "Type": "/HuaweiMDC/ImplementationDataType/Bool"
    },
    {
      "Name": "horn",
      "Type": "/HuaweiMDC/ImplementationDataType/Bool"
    },
    {
      "Name": "steering_angle",
      "Type": "/HuaweiMDC/ImplementationDataType/Double"
    },
    {
      "Name": "pam_esp_stop_distance",
      "Type": "/HuaweiMDC/ImplementationDataType/Int32"
    }
  ],
  "IsPlane": "false"
}