// Auto generated code by esphome
// ========== AUTO GENERATED INCLUDE BLOCK BEGIN ===========
#include "esphome.h"
using namespace esphome;
using std::isnan;
using std::min;
using std::max;
using namespace light;
using namespace number;
using namespace sensor;
using namespace binary_sensor;
using namespace button;
using namespace select;
using namespace text_sensor;
using namespace switch_;
using namespace text;
using namespace update;
static logger::Logger *logger_logger_id;
static wifi::WiFiComponent *wifi_wificomponent_id;
static mdns::MDNSComponent *mdns_mdnscomponent_id;
static http_request::OtaHttpRequestComponent *ota_http_request;
static esphome::ESPHomeOTAComponent *ota_esphome;
static preferences::IntervalSyncer *preferences_intervalsyncer_id;
static safe_mode::SafeModeComponent *safe_mode_safemodecomponent_id;
static api::APIServer *api_apiserver_id;
static api::UserServiceTrigger<api::enums::SUPPORTS_RESPONSE_NONE, std::string> *api_userservicetrigger_id;
static Automation<std::string> *automation_id_2;
static StartupTrigger *startuptrigger_id;
static Automation<> *automation_id;
using namespace i2c;
static i2c::IDFI2CBus *bus_a;
using namespace json;
static http_request::HttpRequestIDF *http_request_httprequestidf_id;
static improv_serial::ImprovSerialComponent *improv_serial_improvserialcomponent_id;
static status_led::StatusLEDLightOutput *status_led_statusledlightoutput_id;
static esp32::ESP32InternalGPIOPin *esp32_esp32internalgpiopin_id;
static light::LightState *esp32_led;
static esp32_rmt_led_strip::ESP32RMTLEDStripLightOutput *esp32_rmt_led_strip_esp32rmtledstriplightoutput_id;
static light::AddressableLightState *rgb_strip;
static partition::PartitionLightOutput *partition_partitionlightoutput_id;
static light::AddressableLightState *neopixel_1;
static partition::PartitionLightOutput *partition_partitionlightoutput_id_2;
static light::AddressableLightState *neopixel_2;
static partition::PartitionLightOutput *partition_partitionlightoutput_id_3;
static light::AddressableLightState *neopixel_3;
static template_::TemplateNumber *illuminance_offset_ui;
static number::NumberStateTrigger *number_numberstatetrigger_id;
static Automation<float> *automation_id_4;
static template_::TemplateNumber *off_delay;
static template_::TemplateNumber *distance;
static template_::TemplateNumber *installation_angle_ui;
static template_::TemplateNumber *exit_threshold_pct;
static template_::TemplateNumber *assume_present_timeout_s;
static template_::TemplateNumber *entry_zone_1_begin_x;
static template_::TemplateNumber *entry_zone_1_end_x;
static template_::TemplateNumber *entry_zone_1_begin_y;
static template_::TemplateNumber *entry_zone_1_end_y;
static template_::TemplateNumber *entry_zone_2_begin_x;
static template_::TemplateNumber *entry_zone_2_end_x;
static template_::TemplateNumber *entry_zone_2_begin_y;
static template_::TemplateNumber *entry_zone_2_end_y;
static template_::TemplateNumber *zone1_begin_x;
static template_::TemplateNumber *zone1_end_x;
static template_::TemplateNumber *zone1_begin_y;
static template_::TemplateNumber *zone1_end_y;
static template_::TemplateNumber *zone_1_off_delay;
static template_::TemplateNumber *zone2_begin_x;
static template_::TemplateNumber *zone2_end_x;
static template_::TemplateNumber *zone2_begin_y;
static template_::TemplateNumber *zone2_end_y;
static template_::TemplateNumber *zone_2_off_delay;
static template_::TemplateNumber *zone3_begin_x;
static template_::TemplateNumber *zone3_end_x;
static template_::TemplateNumber *zone3_begin_y;
static template_::TemplateNumber *zone3_end_y;
static template_::TemplateNumber *zone_3_off_delay;
static template_::TemplateNumber *zone4_begin_x;
static template_::TemplateNumber *zone4_end_x;
static template_::TemplateNumber *zone4_begin_y;
static template_::TemplateNumber *zone4_end_y;
static template_::TemplateNumber *zone_4_off_delay;
static template_::TemplateNumber *occupancy_mask_1_begin_x;
static template_::TemplateNumber *occupancy_mask_1_end_x;
static template_::TemplateNumber *occupancy_mask_1_begin_y;
static template_::TemplateNumber *occupancy_mask_1_end_y;
static template_::TemplateNumber *occupancy_mask_2_begin_x;
static template_::TemplateNumber *occupancy_mask_2_end_x;
static template_::TemplateNumber *occupancy_mask_2_begin_y;
static template_::TemplateNumber *occupancy_mask_2_end_y;
static template_::TemplateNumber *aggressive_timeout;
static bh1750::BH1750Sensor *illuminance_sensor;
static sensor::StatelessLambdaFilter *sensor_lambdafilter_id;
static sensor::DeltaFilter *sensor_deltafilter_id;
static sensor::DeltaFilter *sensor_deltafilter_id_2;
static sensor::OrFilter *sensor_orfilter_id;
static sensor::ClampFilter *sensor_clampfilter_id;
static template_::TemplateSensor *assumed_present_remaining_s;
static template_::TemplateSensor *target1_x;
static template_::TemplateSensor *target1_y;
static template_::TemplateSensor *target1_speed;
static template_::TemplateSensor *target1_resolution;
static template_::TemplateSensor *target2_x;
static template_::TemplateSensor *target2_y;
static template_::TemplateSensor *target2_speed;
static template_::TemplateSensor *target2_resolution;
static template_::TemplateSensor *target3_x;
static template_::TemplateSensor *target3_y;
static template_::TemplateSensor *target3_speed;
static template_::TemplateSensor *target3_resolution;
static template_::TemplateSensor *target1_angle;
static template_::TemplateSensor *target2_angle;
static template_::TemplateSensor *target3_angle;
static template_::TemplateSensor *target1_distance;
static template_::TemplateSensor *target2_distance;
static template_::TemplateSensor *target3_distance;
static template_::TemplateSensor *zone1_target_count;
static template_::TemplateSensor *zone2_target_count;
static template_::TemplateSensor *zone3_target_count;
static template_::TemplateSensor *zone4_target_count;
static template_::TemplateSensor *occupancy_mask_1_target_count;
static template_::TemplateSensor *occupancy_mask_2_target_count;
static gpio::GPIOBinarySensor *flash_button;
static binary_sensor::DelayedOnFilter *binary_sensor_delayedonfilter_id;
static esp32::ESP32InternalGPIOPin *esp32_esp32internalgpiopin_id_3;
static binary_sensor::MultiClickTrigger *binary_sensor_multiclicktrigger_id;
static Automation<> *automation_id_5;
static RepeatAction<> *repeataction_id;
static light::LightControlAction<uint32_t> *light_lightcontrolaction_id;
static DelayAction<uint32_t> *delayaction_id_2;
static light::LightControlAction<uint32_t> *light_lightcontrolaction_id_2;
static DelayAction<uint32_t> *delayaction_id_3;
static light::LightControlAction<> *light_lightcontrolaction_id_3;
static template_::TemplateBinarySensor *occupancy;
static binary_sensor::DelayedOffFilter *binary_sensor_delayedofffilter_id;
static template_::TemplateBinarySensor *zone1_occupancy;
static binary_sensor::DelayedOffFilter *binary_sensor_delayedofffilter_id_2;
static template_::TemplateBinarySensor *zone2_occupancy;
static binary_sensor::DelayedOffFilter *binary_sensor_delayedofffilter_id_3;
static template_::TemplateBinarySensor *zone3_occupancy;
static binary_sensor::DelayedOffFilter *binary_sensor_delayedofffilter_id_4;
static template_::TemplateBinarySensor *zone4_occupancy;
static binary_sensor::DelayedOffFilter *binary_sensor_delayedofffilter_id_5;
static template_::TemplateBinarySensor *target1_active;
static template_::TemplateBinarySensor *target2_active;
static template_::TemplateBinarySensor *target3_active;
static template_::TemplateBinarySensor *assumed_present;
static restart::RestartButton *restart_restartbutton_id;
static template_::TemplateButton *template__templatebutton_id;
static button::ButtonPressTrigger *button_buttonpresstrigger_id;
static Automation<> *automation_id_6;
static StatelessLambdaAction<> *lambdaaction_id_4;
static factory_reset::FactoryResetButton *factory_reset_button;
static template_::TemplateButton *get_mmwave_firmware;
static button::ButtonPressTrigger *button_buttonpresstrigger_id_2;
static Automation<> *automation_id_7;
static template_::TemplateButton *reboot_mmwave_sensor;
static button::ButtonPressTrigger *button_buttonpresstrigger_id_3;
static Automation<> *automation_id_8;
static template_::TemplateButton *factory_reset_mmwave_sensor;
static button::ButtonPressTrigger *button_buttonpresstrigger_id_4;
static Automation<> *automation_id_9;
static StatelessLambdaAction<> *lambdaaction_id_7;
static template_::TemplateSelect<false, true, true, 0> *firmware_ble;
static template_::TemplateSelect<false, true, true, 0> *firmware_co2;
static template_::TemplateSelect<false, true, true, 2> *update_speed_select;
static select::SelectStateTrigger *select_selectstatetrigger_id;
static Automation<StringRef, size_t> *automation_id_10;
static template_::TemplateSelect<false, true, true, 0> *template__templateselect_id;
static select::SelectStateTrigger *select_selectstatetrigger_id_2;
static Automation<StringRef, size_t> *automation_id_11;
static template_::TemplateSelect<false, true, true, 5> *tracking_behaviour;
static select::SelectStateTrigger *select_selectstatetrigger_id_3;
static Automation<StringRef, size_t> *automation_id_12;
static interval::IntervalTrigger *interval_intervaltrigger_id;
static Automation<> *automation_id_13;
static template_::TemplateTextSensor *firmware_version;
static template_::TemplateSwitch *mmwave_configuration;
static Automation<> *automation_id_15;
static uart::UARTWriteAction<> *uart_uartwriteaction_id_5;
static template_::TemplateSwitch *bluetooth_switch;
static Automation<> *automation_id_17;
static switch_::TurnOnAction<> *switch__turnonaction_id_5;
static DelayAction<> *delayaction_id_14;
static uart::UARTWriteAction<> *uart_uartwriteaction_id_7;
static template_::TemplateSwitch *aggressive_target_clearing;
static template_::TemplateSwitch *inverse_mounting;
static template_::TemplateSwitch *entry_exit_enabled;
static template_::TemplateSwitch *polygon_zones_enabled;
static template_::TemplateText *poly_zone_1;
static template_::TemplateText *poly_zone_2;
static template_::TemplateText *poly_zone_3;
static template_::TemplateText *poly_zone_4;
static template_::TemplateText *poly_exclusion_1;
static template_::TemplateText *poly_exclusion_2;
static template_::TemplateText *poly_entry_1;
static template_::TemplateText *poly_entry_2;
using namespace uart;
static uart::IDFUARTComponent *uart_bus;
static esp32::ESP32InternalGPIOPin *esp32_esp32internalgpiopin_id_4;
static esp32::ESP32InternalGPIOPin *esp32_esp32internalgpiopin_id_5;
static uart::UARTDebugger *uart_uartdebugger_id;
static Automation<uart::UARTDirection, std::vector<uint8_t>> *automation_id_18;
static esp32_ble_tracker::ESP32BLETracker *esp32_ble_tracker_esp32bletracker_id;
static bluetooth_proxy::BluetoothProxy *bluetooth_proxy_bluetoothproxy_id;
static bluetooth_proxy::BluetoothConnection *bluetooth_proxy_bluetoothconnection_id;
static bluetooth_proxy::BluetoothConnection *bluetooth_proxy_bluetoothconnection_id_2;
static bluetooth_proxy::BluetoothConnection *bluetooth_proxy_bluetoothconnection_id_3;
static esp32_improv::ESP32ImprovComponent *esp32_improv_esp32improvcomponent_id;
static http_request::HttpRequestUpdate *update_http_request;
using namespace output;
static esp32_ble::ESP32BLE *esp32_ble_esp32ble_id;
static esp32_ble_server::BLEServer *esp32_ble_server_bleserver_id;
static esp32_ble_server::BLEService *esp32_ble_server_bleservice_id;
static esp32_ble_server::BLECharacteristic *esp32_ble_server_blecharacteristic_id;
static esp32_ble_server::BLECharacteristic *esp32_ble_server_blecharacteristic_id_2;
static esp32_ble_server::BLECharacteristic *esp32_ble_server_blecharacteristic_id_3;
static StatelessLambdaAction<> *lambdaaction_id;
static button::PressAction<> *button_pressaction_id;
static binary_sensor::BinarySensorPublishAction<> *binary_sensor_binarysensorpublishaction_id;
static binary_sensor::BinarySensorPublishAction<> *binary_sensor_binarysensorpublishaction_id_2;
static binary_sensor::BinarySensorPublishAction<> *binary_sensor_binarysensorpublishaction_id_3;
static binary_sensor::BinarySensorPublishAction<> *binary_sensor_binarysensorpublishaction_id_4;
static StatelessLambdaAction<float> *lambdaaction_id_3;
static button::PressAction<> *button_pressaction_id_2;
static StatelessLambdaAction<std::string> *lambdaaction_id_2;
static UpdateComponentAction<std::string> *updatecomponentaction_id;
static DelayAction<std::string> *delayaction_id;
static update::PerformAction<std::string> *update_performaction_id;
static api::UserServiceTrigger<api::enums::SUPPORTS_RESPONSE_OPTIONAL> *api_userservicetrigger_id_2;
static Automation<uint32_t, bool> *automation_id_3;
static api::APIRespondAction<uint32_t, bool> *api_apirespondaction_id;
static api::APIUnregisterServiceCallAction<uint32_t, bool> *api_userservicetrigger_id_2__unregister;
using namespace api;
static StatelessLambdaAction<> *lambdaaction_id_5;
static UpdateComponentAction<> *updatecomponentaction_id_2;
static DelayAction<> *delayaction_id_4;
static update::PerformAction<> *update_performaction_id_2;
static switch_::TurnOnAction<> *switch__turnonaction_id;
static DelayAction<> *delayaction_id_5;
static uart::UARTWriteAction<> *uart_uartwriteaction_id;
static StatelessLambdaAction<> *lambdaaction_id_6;
static switch_::TurnOffAction<> *switch__turnoffaction_id;
static DelayAction<> *delayaction_id_6;
static switch_::TurnOnAction<> *switch__turnonaction_id_2;
static DelayAction<> *delayaction_id_7;
static uart::UARTWriteAction<> *uart_uartwriteaction_id_2;
static switch_::TurnOnAction<> *switch__turnonaction_id_3;
static DelayAction<> *delayaction_id_8;
static uart::UARTWriteAction<> *uart_uartwriteaction_id_3;
static DelayAction<> *delayaction_id_9;
static switch_::TurnOffAction<> *switch__turnoffaction_id_2;
static DelayAction<> *delayaction_id_10;
static button::PressAction<> *button_pressaction_id_3;
static Automation<> *automation_id_14;
static uart::UARTWriteAction<> *uart_uartwriteaction_id_4;
static DelayAction<> *delayaction_id_15;
static button::PressAction<> *button_pressaction_id_5;
static DelayAction<> *delayaction_id_16;
static switch_::TurnOffAction<> *switch__turnoffaction_id_4;
static Automation<> *automation_id_16;
static switch_::TurnOnAction<> *switch__turnonaction_id_4;
static DelayAction<> *delayaction_id_11;
static uart::UARTWriteAction<> *uart_uartwriteaction_id_6;
static DelayAction<> *delayaction_id_12;
static button::PressAction<> *button_pressaction_id_4;
static DelayAction<> *delayaction_id_13;
static switch_::TurnOffAction<> *switch__turnoffaction_id_3;
static globals::GlobalsComponent<unsigned long> *mmwave_update_time;
static globals::GlobalsComponent<unsigned long> *mmwave_update_interval;
static globals::GlobalsComponent<unsigned long> *target1_last_update;
static globals::GlobalsComponent<int> *target1_reset;
static globals::GlobalsComponent<unsigned int> *entities_update_count;
static globals::GlobalsComponent<unsigned int> *entities_update_max_count;
static globals::GlobalsComponent<unsigned int> *extra_entities;
static globals::GlobalsComponent<unsigned long> *assumed_present_until_ms;
static globals::GlobalsComponent<bool> *assumed_present_active;
static globals::GlobalsComponent<int> *last_zone_hold;
static globals::GlobalsComponent<float> *last_target_x_mm;
static globals::GlobalsComponent<float> *last_target_y_mm;
static StatelessLambdaAction<> *lambdaaction_id_11;
static StatelessLambdaAction<uart::UARTDirection, std::vector<uint8_t>> *lambdaaction_id_12;
static uart::UARTDummyReceiver *uart_uartdummyreceiver_id;
static StatelessLambdaAction<StringRef, size_t> *lambdaaction_id_8;
static StatelessLambdaAction<StringRef, size_t> *lambdaaction_id_9;
static StatelessLambdaAction<StringRef, size_t> *lambdaaction_id_10;
// ========== AUTO GENERATED INCLUDE BLOCK END ==========="

void setup() {
  // ========== AUTO GENERATED CODE BEGIN ===========
  // network:
  //   enable_ipv6: false
  //   min_ipv6_addr_count: 0
  // esphome:
  //   name: everything-presence-lite
  //   comment: Everything Presence Lite
  //   friendly_name: Everything Presence Lite
  //   name_add_mac_suffix: true
  //   project:
  //     name: EverythingSmartTechnology.Everything Presence Lite
  //     version: 1.4.2
  //   on_boot:
  //     - priority: -100.0
  //       then:
  //         - lambda: !lambda |-
  //             if (std::string("true") == "true") {
  //               id(firmware_ble).publish_state("Enabled");
  //             } else {
  //               id(firmware_ble).publish_state("Disabled");
  //             }
  //   
  //             if (std::string("false") == "true") {
  //               id(firmware_co2).publish_state("Enabled");
  //             } else {
  //               id(firmware_co2).publish_state("Disabled");
  //             }
  //           type_id: lambdaaction_id
  //         - button.press:
  //             id: get_mmwave_firmware
  //           type_id: button_pressaction_id
  //         - binary_sensor.template.publish:
  //             id: zone1_occupancy
  //             state: false
  //           type_id: binary_sensor_binarysensorpublishaction_id
  //         - binary_sensor.template.publish:
  //             id: zone2_occupancy
  //             state: false
  //           type_id: binary_sensor_binarysensorpublishaction_id_2
  //         - binary_sensor.template.publish:
  //             id: zone3_occupancy
  //             state: false
  //           type_id: binary_sensor_binarysensorpublishaction_id_3
  //         - binary_sensor.template.publish:
  //             id: zone4_occupancy
  //             state: false
  //           type_id: binary_sensor_binarysensorpublishaction_id_4
  //       automation_id: automation_id
  //       trigger_id: startuptrigger_id
  //   min_version: 2026.2.4
  //   build_path: build/everything-presence-lite
  //   platformio_options: {}
  //   environment_variables: {}
  //   includes: []
  //   includes_c: []
  //   libraries: []
  //   debug_scheduler: false
  //   areas: []
  //   devices: []
  App.pre_setup("everything-presence-lite", "Everything Presence Lite", true);
  // light:
  // number:
  // sensor:
  // binary_sensor:
  // button:
  // select:
  // text_sensor:
  // switch:
  // text:
  // update:
  // logger:
  //   level: DEBUG
  //   hardware_uart: USB_SERIAL_JTAG
  //   id: logger_logger_id
  //   baud_rate: 115200
  //   tx_buffer_size: 512
  //   deassert_rts_dtr: false
  //   task_log_buffer_size: 768
  //   logs: {}
  //   runtime_tag_levels: false
  logger_logger_id = new logger::Logger(115200, 512);
  logger_logger_id->create_pthread_key();
  logger_logger_id->init_log_buffer(768);
  logger_logger_id->set_log_level(ESPHOME_LOG_LEVEL_DEBUG);
  logger_logger_id->set_uart_selection(logger::UART_SELECTION_USB_SERIAL_JTAG);
  logger_logger_id->pre_setup();
  logger_logger_id->set_component_source(LOG_STR("logger"));
  App.register_component(logger_logger_id);
  // wifi:
  //   id: wifi_wificomponent_id
  //   domain: .local
  //   reboot_timeout: 15min
  //   power_save_mode: LIGHT
  //   fast_connect: false
  //   enable_btm: false
  //   enable_rrm: false
  //   passive_scan: false
  //   enable_on_boot: true
  //   post_connect_roaming: true
  //   min_auth_mode: WPA2
  //   networks: []
  //   use_address: everything-presence-lite.local
  wifi_wificomponent_id = new wifi::WiFiComponent();
  wifi_wificomponent_id->set_use_address("everything-presence-lite.local");
  wifi_wificomponent_id->set_reboot_timeout(900000);
  wifi_wificomponent_id->set_power_save_mode(wifi::WIFI_POWER_SAVE_LIGHT);
  wifi_wificomponent_id->set_min_auth_mode(wifi::WIFI_MIN_AUTH_MODE_WPA2);
  wifi_wificomponent_id->set_component_source(LOG_STR("wifi"));
  App.register_component(wifi_wificomponent_id);
  // mdns:
  //   id: mdns_mdnscomponent_id
  //   disabled: false
  //   services: []
  mdns_mdnscomponent_id = new mdns::MDNSComponent();
  mdns_mdnscomponent_id->set_component_source(LOG_STR("mdns"));
  App.register_component(mdns_mdnscomponent_id);
  // ota:
  // ota.http_request:
  //   platform: http_request
  //   id: ota_http_request
  //   http_request_id: http_request_httprequestidf_id
  ota_http_request = new http_request::OtaHttpRequestComponent();
  // ota.esphome:
  //   platform: esphome
  //   id: ota_esphome
  //   version: 2
  //   port: 3232
  ota_esphome = new esphome::ESPHomeOTAComponent();
  ota_esphome->set_port(3232);
  ota_esphome->set_component_source(LOG_STR("esphome.ota"));
  App.register_component(ota_esphome);
  // preferences:
  //   id: preferences_intervalsyncer_id
  //   flash_write_interval: 60s
  preferences_intervalsyncer_id = new preferences::IntervalSyncer();
  preferences_intervalsyncer_id->set_write_interval(60000);
  preferences_intervalsyncer_id->set_component_source(LOG_STR("preferences"));
  App.register_component(preferences_intervalsyncer_id);
  // safe_mode:
  //   id: safe_mode_safemodecomponent_id
  //   boot_is_good_after: 1min
  //   disabled: false
  //   num_attempts: 10
  //   reboot_timeout: 5min
  safe_mode_safemodecomponent_id = new safe_mode::SafeModeComponent();
  safe_mode_safemodecomponent_id->set_component_source(LOG_STR("safe_mode"));
  App.register_component(safe_mode_safemodecomponent_id);
  if (safe_mode_safemodecomponent_id->should_enter_safe_mode(10, 300000, 60000)) return;
  ota_http_request->set_component_source(LOG_STR("http_request.ota"));
  App.register_component(ota_http_request);
  // api:
  //   actions:
  //     - action: set_update_manifest
  //       variables:
  //         url: string
  //       then:
  //         - lambda: !lambda |-
  //             ESP_LOGI("fw", "Setting update manifest URL: %s", url.c_str());
  //             id(update_http_request).set_source_url(url);
  //           type_id: lambdaaction_id_2
  //         - component.update:
  //             id: update_http_request
  //           type_id: updatecomponentaction_id
  //         - delay: 1s
  //           type_id: delayaction_id
  //         - update.perform:
  //             id: update_http_request
  //             force_update: true
  //           type_id: update_performaction_id
  //       automation_id: automation_id_2
  //       trigger_id: api_userservicetrigger_id
  //       supports_response: none
  //     - action: get_build_flags
  //       then:
  //         - api.respond:
  //             data: !lambda |-
  //               root["ethernet_enabled"]  = false;
  //               root["co2_enabled"]       = false;
  //               root["bluetooth_enabled"] = true;
  //               root["board_revision"]    = "1.2";
  //               root["sensor_variant"]    = "ld2450";
  //               root["firmware_channel"]  = "stable";
  //               root["model"]             = "everything-presence-lite";
  //             id: api_apiserver_id
  //             success: true
  //             error_message: ''
  //           type_id: api_apirespondaction_id
  //       automation_id: automation_id_3
  //       trigger_id: api_userservicetrigger_id_2
  //       variables: {}
  //       supports_response: optional
  //   id: api_apiserver_id
  //   port: 6053
  //   reboot_timeout: 15min
  //   batch_delay: 100ms
  //   custom_services: false
  //   homeassistant_services: false
  //   homeassistant_states: false
  //   listen_backlog: 4
  //   max_connections: 8
  //   max_send_queue: 8
  api_apiserver_id = new api::APIServer();
  api_apiserver_id->set_component_source(LOG_STR("api"));
  App.register_component(api_apiserver_id);
  api_apiserver_id->set_port(6053);
  api_apiserver_id->set_reboot_timeout(900000);
  api_apiserver_id->set_batch_delay(100);
  api_apiserver_id->set_listen_backlog(4);
  api_apiserver_id->set_max_connections(8);
  api_userservicetrigger_id = new api::UserServiceTrigger<api::enums::SUPPORTS_RESPONSE_NONE, std::string>("set_update_manifest", {"url"});
  automation_id_2 = new Automation<std::string>(api_userservicetrigger_id);
  startuptrigger_id = new StartupTrigger(-100.0f);
  startuptrigger_id->set_component_source(LOG_STR("esphome.coroutine"));
  App.register_component(startuptrigger_id);
  automation_id = new Automation<>(startuptrigger_id);
  // i2c:
  //   id: bus_a
  //   sda: 0
  //   scl: 1
  //   scan: true
  //   sda_pullup_enabled: true
  //   scl_pullup_enabled: true
  //   frequency: 50000.0
  bus_a = new i2c::IDFI2CBus();
  bus_a->set_component_source(LOG_STR("i2c"));
  App.register_component(bus_a);
  bus_a->set_sda_pin(0);
  bus_a->set_sda_pullup_enabled(true);
  bus_a->set_scl_pin(1);
  bus_a->set_scl_pullup_enabled(true);
  bus_a->set_frequency(50000);
  bus_a->set_scan(true);
  // json:
  //   {}
  // substitutions:
  //   name: everything-presence-lite
  //   friendly_name: Everything Presence Lite
  //   illuminance_update_interval: 2s
  //   hidden_ssid: 'false'
  //   log_level: DEBUG
  //   device_config:
  //     ethernet_enabled: false
  //     co2_enabled: false
  //     bluetooth_enabled: true
  //     board_revision: '1.2'
  //     sensor_variant: ld2450
  //     firmware_channel: stable
  //     model: everything-presence-lite
  // esp32:
  //   board: esp32-c3-devkitm-1
  //   variant: ESP32C3
  //   framework:
  //     type: esp-idf
  //     version: 5.5.2
  //     sdkconfig_options: {}
  //     log_level: ERROR
  //     advanced:
  //       compiler_optimization: SIZE
  //       enable_idf_experimental_features: false
  //       enable_lwip_assert: true
  //       ignore_efuse_custom_mac: false
  //       ignore_efuse_mac_crc: false
  //       enable_lwip_mdns_queries: true
  //       enable_lwip_bridge_interface: false
  //       enable_lwip_tcpip_core_locking: true
  //       enable_lwip_check_thread_safety: true
  //       disable_libc_locks_in_iram: true
  //       disable_vfs_support_termios: true
  //       disable_vfs_support_select: true
  //       disable_vfs_support_dir: true
  //       freertos_in_iram: false
  //       ringbuf_in_iram: false
  //       heap_in_iram: false
  //       execute_from_psram: false
  //       loop_task_stack_size: 8192
  //       enable_ota_rollback: true
  //       use_full_certificate_bundle: false
  //       include_builtin_idf_components: []
  //       disable_debug_stubs: true
  //       disable_ocd_aware: true
  //       disable_usb_serial_jtag_secondary: true
  //       disable_dev_null_vfs: true
  //       disable_mbedtls_peer_cert: true
  //       disable_mbedtls_pkcs7: true
  //       disable_regi2c_in_iram: true
  //       disable_fatfs: true
  //     components: []
  //     platform_version: https:github.com/pioarduino/platform-espressif32/releases/download/55.03.37/platform-espressif32.zip
  //     source: pioarduino/framework-espidf@https:github.com/pioarduino/esp-idf/releases/download/v5.5.2/esp-idf-v5.5.2.tar.xz
  //   flash_size: 4MB
  //   cpu_frequency: 160MHZ
  // http_request:
  //   id: http_request_httprequestidf_id
  //   useragent: ESPHome/2026.2.4 (https:esphome.io)
  //   follow_redirects: true
  //   redirect_limit: 3
  //   timeout: 4500ms
  //   verify_ssl: true
  //   buffer_size_rx: 512
  //   buffer_size_tx: 512
  http_request_httprequestidf_id = new http_request::HttpRequestIDF();
  http_request_httprequestidf_id->set_timeout(4500);
  http_request_httprequestidf_id->set_useragent("ESPHome/2026.2.4 (https://esphome.io)");
  http_request_httprequestidf_id->set_follow_redirects(true);
  http_request_httprequestidf_id->set_redirect_limit(3);
  http_request_httprequestidf_id->set_buffer_size_rx(512);
  http_request_httprequestidf_id->set_buffer_size_tx(512);
  http_request_httprequestidf_id->set_verify_ssl(true);
  http_request_httprequestidf_id->set_component_source(LOG_STR("http_request"));
  App.register_component(http_request_httprequestidf_id);
  // improv_serial:
  //   id: improv_serial_improvserialcomponent_id
  improv_serial_improvserialcomponent_id = new improv_serial::ImprovSerialComponent();
  improv_serial_improvserialcomponent_id->set_component_source(LOG_STR("improv_serial"));
  App.register_component(improv_serial_improvserialcomponent_id);
  // light.status_led:
  //   platform: status_led
  //   name: ESP32 LED
  //   id: esp32_led
  //   pin:
  //     number: 8
  //     mode:
  //       output: true
  //       input: false
  //       open_drain: false
  //       pullup: false
  //       pulldown: false
  //     id: esp32_esp32internalgpiopin_id
  //     inverted: false
  //     ignore_pin_validation_error: false
  //     ignore_strapping_warning: false
  //     drive_strength: 20.0
  //   internal: false
  //   restore_mode: ALWAYS_OFF
  //   entity_category: config
  //   disabled_by_default: false
  //   output_id: status_led_statusledlightoutput_id
  status_led_statusledlightoutput_id = new status_led::StatusLEDLightOutput();
  esp32_esp32internalgpiopin_id = new esp32::ESP32InternalGPIOPin();
  esp32_esp32internalgpiopin_id->set_pin(::GPIO_NUM_8);
  esp32_esp32internalgpiopin_id->set_drive_strength(::GPIO_DRIVE_CAP_2);
  esp32_esp32internalgpiopin_id->set_flags(gpio::Flags::FLAG_OUTPUT);
  status_led_statusledlightoutput_id->set_pin(esp32_esp32internalgpiopin_id);
  status_led_statusledlightoutput_id->set_component_source(LOG_STR("status_led.light"));
  App.register_component(status_led_statusledlightoutput_id);
  esp32_led = new light::LightState(status_led_statusledlightoutput_id);
  App.register_light(esp32_led);
  esp32_led->set_component_source(LOG_STR("light"));
  App.register_component(esp32_led);
  esp32_led->set_name("ESP32 LED", 2873023270UL);
  esp32_led->set_internal(false);
  esp32_led->set_entity_category(::ENTITY_CATEGORY_CONFIG);
  esp32_led->set_restore_mode(light::LIGHT_ALWAYS_OFF);
  esp32_led->add_effects({});
  // light.esp32_rmt_led_strip:
  //   platform: esp32_rmt_led_strip
  //   id: rgb_strip
  //   pin:
  //     number: 4
  //     mode:
  //       output: true
  //       input: false
  //       open_drain: false
  //       pullup: false
  //       pulldown: false
  //     id: esp32_esp32internalgpiopin_id_2
  //     inverted: false
  //     ignore_pin_validation_error: false
  //     ignore_strapping_warning: false
  //     drive_strength: 20.0
  //   num_leds: 3
  //   rgb_order: GRB
  //   chipset: WS2812
  //   name: NeoPixel Strip
  //   internal: true
  //   disabled_by_default: false
  //   restore_mode: ALWAYS_OFF
  //   gamma_correct: 2.8
  //   default_transition_length: 1s
  //   flash_transition_length: 0s
  //   output_id: esp32_rmt_led_strip_esp32rmtledstriplightoutput_id
  //   rmt_symbols: 96
  //   is_rgbw: false
  //   is_wrgb: false
  //   use_psram: true
  //   reset_high: 0us
  //   reset_low: 0us
  esp32_rmt_led_strip_esp32rmtledstriplightoutput_id = new esp32_rmt_led_strip::ESP32RMTLEDStripLightOutput();
  rgb_strip = new light::AddressableLightState(esp32_rmt_led_strip_esp32rmtledstriplightoutput_id);
  App.register_light(rgb_strip);
  rgb_strip->set_component_source(LOG_STR("light"));
  App.register_component(rgb_strip);
  rgb_strip->set_name("NeoPixel Strip", 3023825952UL);
  rgb_strip->set_internal(true);
  rgb_strip->set_restore_mode(light::LIGHT_ALWAYS_OFF);
  rgb_strip->set_default_transition_length(1000);
  rgb_strip->set_flash_transition_length(0);
  rgb_strip->set_gamma_correct(2.8f);
  rgb_strip->add_effects({});
  esp32_rmt_led_strip_esp32rmtledstriplightoutput_id->set_component_source(LOG_STR("esp32_rmt_led_strip.light"));
  App.register_component(esp32_rmt_led_strip_esp32rmtledstriplightoutput_id);
  esp32_rmt_led_strip_esp32rmtledstriplightoutput_id->set_num_leds(3);
  esp32_rmt_led_strip_esp32rmtledstriplightoutput_id->set_pin(4);
  esp32_rmt_led_strip_esp32rmtledstriplightoutput_id->set_led_params(400, 1000, 1000, 400, 0, 0);
  esp32_rmt_led_strip_esp32rmtledstriplightoutput_id->set_rgb_order(esp32_rmt_led_strip::ORDER_GRB);
  esp32_rmt_led_strip_esp32rmtledstriplightoutput_id->set_is_rgbw(false);
  esp32_rmt_led_strip_esp32rmtledstriplightoutput_id->set_is_wrgb(false);
  esp32_rmt_led_strip_esp32rmtledstriplightoutput_id->set_use_psram(true);
  esp32_rmt_led_strip_esp32rmtledstriplightoutput_id->set_rmt_symbols(96);
  // light.partition:
  //   platform: partition
  //   name: NeoPixel 1
  //   id: neopixel_1
  //   segments:
  //     - id: rgb_strip
  //       from: 0
  //       to: 0
  //       reversed: false
  //   entity_category: config
  //   disabled_by_default: false
  //   restore_mode: ALWAYS_OFF
  //   gamma_correct: 2.8
  //   default_transition_length: 1s
  //   flash_transition_length: 0s
  //   output_id: partition_partitionlightoutput_id
  partition_partitionlightoutput_id = new partition::PartitionLightOutput({partition::AddressableSegment(rgb_strip, 0, 1, false)});
  partition_partitionlightoutput_id->set_component_source(LOG_STR("partition.light"));
  App.register_component(partition_partitionlightoutput_id);
  neopixel_1 = new light::AddressableLightState(partition_partitionlightoutput_id);
  App.register_light(neopixel_1);
  neopixel_1->set_component_source(LOG_STR("light"));
  App.register_component(neopixel_1);
  neopixel_1->set_name("NeoPixel 1", 2471155367UL);
  neopixel_1->set_entity_category(::ENTITY_CATEGORY_CONFIG);
  neopixel_1->set_restore_mode(light::LIGHT_ALWAYS_OFF);
  neopixel_1->set_default_transition_length(1000);
  neopixel_1->set_flash_transition_length(0);
  neopixel_1->set_gamma_correct(2.8f);
  neopixel_1->add_effects({});
  // light.partition:
  //   platform: partition
  //   name: NeoPixel 2
  //   id: neopixel_2
  //   segments:
  //     - id: rgb_strip
  //       from: 1
  //       to: 1
  //       reversed: false
  //   entity_category: config
  //   disabled_by_default: false
  //   restore_mode: ALWAYS_OFF
  //   gamma_correct: 2.8
  //   default_transition_length: 1s
  //   flash_transition_length: 0s
  //   output_id: partition_partitionlightoutput_id_2
  partition_partitionlightoutput_id_2 = new partition::PartitionLightOutput({partition::AddressableSegment(rgb_strip, 1, 1, false)});
  partition_partitionlightoutput_id_2->set_component_source(LOG_STR("partition.light"));
  App.register_component(partition_partitionlightoutput_id_2);
  neopixel_2 = new light::AddressableLightState(partition_partitionlightoutput_id_2);
  App.register_light(neopixel_2);
  neopixel_2->set_component_source(LOG_STR("light"));
  App.register_component(neopixel_2);
  neopixel_2->set_name("NeoPixel 2", 2471155364UL);
  neopixel_2->set_entity_category(::ENTITY_CATEGORY_CONFIG);
  neopixel_2->set_restore_mode(light::LIGHT_ALWAYS_OFF);
  neopixel_2->set_default_transition_length(1000);
  neopixel_2->set_flash_transition_length(0);
  neopixel_2->set_gamma_correct(2.8f);
  neopixel_2->add_effects({});
  // light.partition:
  //   platform: partition
  //   name: NeoPixel 3
  //   id: neopixel_3
  //   segments:
  //     - id: rgb_strip
  //       from: 2
  //       to: 2
  //       reversed: false
  //   entity_category: config
  //   disabled_by_default: false
  //   restore_mode: ALWAYS_OFF
  //   gamma_correct: 2.8
  //   default_transition_length: 1s
  //   flash_transition_length: 0s
  //   output_id: partition_partitionlightoutput_id_3
  partition_partitionlightoutput_id_3 = new partition::PartitionLightOutput({partition::AddressableSegment(rgb_strip, 2, 1, false)});
  partition_partitionlightoutput_id_3->set_component_source(LOG_STR("partition.light"));
  App.register_component(partition_partitionlightoutput_id_3);
  neopixel_3 = new light::AddressableLightState(partition_partitionlightoutput_id_3);
  App.register_light(neopixel_3);
  neopixel_3->set_component_source(LOG_STR("light"));
  App.register_component(neopixel_3);
  neopixel_3->set_name("NeoPixel 3", 2471155365UL);
  neopixel_3->set_entity_category(::ENTITY_CATEGORY_CONFIG);
  neopixel_3->set_restore_mode(light::LIGHT_ALWAYS_OFF);
  neopixel_3->set_default_transition_length(1000);
  neopixel_3->set_flash_transition_length(0);
  neopixel_3->set_gamma_correct(2.8f);
  neopixel_3->add_effects({});
  // number.template:
  //   platform: template
  //   name: Illuminance Offset
  //   id: illuminance_offset_ui
  //   unit_of_measurement: lx
  //   min_value: -100.0
  //   max_value: 100.0
  //   step: 5.0
  //   mode: SLIDER
  //   update_interval: 4294967295ms
  //   optimistic: true
  //   restore_value: true
  //   initial_value: 0.0
  //   icon: mdi:brightness-5
  //   entity_category: config
  //   on_value:
  //     - then:
  //         - lambda: !lambda |-
  //             id(illuminance_sensor).update();
  //           type_id: lambdaaction_id_3
  //       automation_id: automation_id_4
  //       trigger_id: number_numberstatetrigger_id
  //   disabled_by_default: false
  illuminance_offset_ui = new template_::TemplateNumber();
  illuminance_offset_ui->set_update_interval(4294967295UL);
  illuminance_offset_ui->set_component_source(LOG_STR("template.number"));
  App.register_component(illuminance_offset_ui);
  App.register_number(illuminance_offset_ui);
  illuminance_offset_ui->set_name("Illuminance Offset", 2653145142UL);
  illuminance_offset_ui->set_icon("mdi:brightness-5");
  illuminance_offset_ui->set_entity_category(::ENTITY_CATEGORY_CONFIG);
  illuminance_offset_ui->traits.set_min_value(-100.0f);
  illuminance_offset_ui->traits.set_max_value(100.0f);
  illuminance_offset_ui->traits.set_step(5.0f);
  illuminance_offset_ui->traits.set_mode(number::NUMBER_MODE_SLIDER);
  illuminance_offset_ui->traits.set_unit_of_measurement("lx");
  illuminance_offset_ui->set_optimistic(true);
  illuminance_offset_ui->set_initial_value(0.0f);
  illuminance_offset_ui->set_restore_value(true);
  number_numberstatetrigger_id = new number::NumberStateTrigger(illuminance_offset_ui);
  automation_id_4 = new Automation<float>(number_numberstatetrigger_id);
  // number.template:
  //   platform: template
  //   name: Occupancy Off Delay
  //   id: off_delay
  //   max_value: 600.0
  //   min_value: 0.0
  //   step: 1.0
  //   optimistic: true
  //   restore_value: true
  //   unit_of_measurement: s
  //   initial_value: 15.0
  //   entity_category: config
  //   disabled_by_default: false
  //   mode: AUTO
  //   update_interval: 60s
  off_delay = new template_::TemplateNumber();
  off_delay->set_update_interval(60000);
  off_delay->set_component_source(LOG_STR("template.number"));
  App.register_component(off_delay);
  App.register_number(off_delay);
  off_delay->set_name("Occupancy Off Delay", 3277100666UL);
  off_delay->set_entity_category(::ENTITY_CATEGORY_CONFIG);
  off_delay->traits.set_min_value(0.0f);
  off_delay->traits.set_max_value(600.0f);
  off_delay->traits.set_step(1.0f);
  off_delay->traits.set_mode(number::NUMBER_MODE_AUTO);
  off_delay->traits.set_unit_of_measurement("s");
  off_delay->set_optimistic(true);
  off_delay->set_initial_value(15.0f);
  off_delay->set_restore_value(true);
  // number.template:
  //   platform: template
  //   name: Max Distance
  //   id: distance
  //   max_value: 600.0
  //   min_value: 0.0
  //   unit_of_measurement: cm
  //   step: 1.0
  //   optimistic: true
  //   restore_value: true
  //   initial_value: 600.0
  //   entity_category: config
  //   disabled_by_default: false
  //   mode: AUTO
  //   update_interval: 60s
  distance = new template_::TemplateNumber();
  distance->set_update_interval(60000);
  distance->set_component_source(LOG_STR("template.number"));
  App.register_component(distance);
  App.register_number(distance);
  distance->set_name("Max Distance", 4193303233UL);
  distance->set_entity_category(::ENTITY_CATEGORY_CONFIG);
  distance->traits.set_min_value(0.0f);
  distance->traits.set_max_value(600.0f);
  distance->traits.set_step(1.0f);
  distance->traits.set_mode(number::NUMBER_MODE_AUTO);
  distance->traits.set_unit_of_measurement("cm");
  distance->set_optimistic(true);
  distance->set_initial_value(600.0f);
  distance->set_restore_value(true);
  // number.template:
  //   platform: template
  //   name: Installation Angle
  //   id: installation_angle_ui
  //   unit_of_measurement: º
  //   min_value: -45.0
  //   max_value: 45.0
  //   step: 1.0
  //   update_interval: 4294967295ms
  //   optimistic: true
  //   restore_value: true
  //   initial_value: 0.0
  //   icon: mdi:angle-acute
  //   entity_category: config
  //   disabled_by_default: false
  //   mode: AUTO
  installation_angle_ui = new template_::TemplateNumber();
  installation_angle_ui->set_update_interval(4294967295UL);
  installation_angle_ui->set_component_source(LOG_STR("template.number"));
  App.register_component(installation_angle_ui);
  App.register_number(installation_angle_ui);
  installation_angle_ui->set_name("Installation Angle", 2338085497UL);
  installation_angle_ui->set_icon("mdi:angle-acute");
  installation_angle_ui->set_entity_category(::ENTITY_CATEGORY_CONFIG);
  installation_angle_ui->traits.set_min_value(-45.0f);
  installation_angle_ui->traits.set_max_value(45.0f);
  installation_angle_ui->traits.set_step(1.0f);
  installation_angle_ui->traits.set_mode(number::NUMBER_MODE_AUTO);
  installation_angle_ui->traits.set_unit_of_measurement("\302\272");
  installation_angle_ui->set_optimistic(true);
  installation_angle_ui->set_initial_value(0.0f);
  installation_angle_ui->set_restore_value(true);
  // number.template:
  //   platform: template
  //   name: Exit Threshold Pct
  //   id: exit_threshold_pct
  //   min_value: 0.0
  //   max_value: 100.0
  //   step: 1.0
  //   optimistic: true
  //   restore_value: true
  //   initial_value: 10.0
  //   unit_of_measurement: '%'
  //   entity_category: config
  //   disabled_by_default: false
  //   mode: AUTO
  //   update_interval: 60s
  exit_threshold_pct = new template_::TemplateNumber();
  exit_threshold_pct->set_update_interval(60000);
  exit_threshold_pct->set_component_source(LOG_STR("template.number"));
  App.register_component(exit_threshold_pct);
  App.register_number(exit_threshold_pct);
  exit_threshold_pct->set_name("Exit Threshold Pct", 1607654873);
  exit_threshold_pct->set_entity_category(::ENTITY_CATEGORY_CONFIG);
  exit_threshold_pct->traits.set_min_value(0.0f);
  exit_threshold_pct->traits.set_max_value(100.0f);
  exit_threshold_pct->traits.set_step(1.0f);
  exit_threshold_pct->traits.set_mode(number::NUMBER_MODE_AUTO);
  exit_threshold_pct->traits.set_unit_of_measurement("%");
  exit_threshold_pct->set_optimistic(true);
  exit_threshold_pct->set_initial_value(10.0f);
  exit_threshold_pct->set_restore_value(true);
  // number.template:
  //   platform: template
  //   name: Assume Present Timeout
  //   id: assume_present_timeout_s
  //   min_value: 0.0
  //   max_value: 600.0
  //   step: 1.0
  //   optimistic: true
  //   restore_value: true
  //   initial_value: 15.0
  //   unit_of_measurement: s
  //   entity_category: config
  //   disabled_by_default: false
  //   mode: AUTO
  //   update_interval: 60s
  assume_present_timeout_s = new template_::TemplateNumber();
  assume_present_timeout_s->set_update_interval(60000);
  assume_present_timeout_s->set_component_source(LOG_STR("template.number"));
  App.register_component(assume_present_timeout_s);
  App.register_number(assume_present_timeout_s);
  assume_present_timeout_s->set_name("Assume Present Timeout", 2785740787UL);
  assume_present_timeout_s->set_entity_category(::ENTITY_CATEGORY_CONFIG);
  assume_present_timeout_s->traits.set_min_value(0.0f);
  assume_present_timeout_s->traits.set_max_value(600.0f);
  assume_present_timeout_s->traits.set_step(1.0f);
  assume_present_timeout_s->traits.set_mode(number::NUMBER_MODE_AUTO);
  assume_present_timeout_s->traits.set_unit_of_measurement("s");
  assume_present_timeout_s->set_optimistic(true);
  assume_present_timeout_s->set_initial_value(15.0f);
  assume_present_timeout_s->set_restore_value(true);
  // number.template:
  //   platform: template
  //   name: Entry Zone 1 Begin X
  //   id: entry_zone_1_begin_x
  //   max_value: 6000.0
  //   min_value: -6000.0
  //   unit_of_measurement: mm
  //   step: 10.0
  //   optimistic: true
  //   restore_value: true
  //   initial_value: 0.0
  //   entity_category: config
  //   disabled_by_default: false
  //   mode: AUTO
  //   update_interval: 60s
  entry_zone_1_begin_x = new template_::TemplateNumber();
  entry_zone_1_begin_x->set_update_interval(60000);
  entry_zone_1_begin_x->set_component_source(LOG_STR("template.number"));
  App.register_component(entry_zone_1_begin_x);
  App.register_number(entry_zone_1_begin_x);
  entry_zone_1_begin_x->set_name("Entry Zone 1 Begin X", 1446671179);
  entry_zone_1_begin_x->set_entity_category(::ENTITY_CATEGORY_CONFIG);
  entry_zone_1_begin_x->traits.set_min_value(-6000.0f);
  entry_zone_1_begin_x->traits.set_max_value(6000.0f);
  entry_zone_1_begin_x->traits.set_step(10.0f);
  entry_zone_1_begin_x->traits.set_mode(number::NUMBER_MODE_AUTO);
  entry_zone_1_begin_x->traits.set_unit_of_measurement("mm");
  entry_zone_1_begin_x->set_optimistic(true);
  entry_zone_1_begin_x->set_initial_value(0.0f);
  entry_zone_1_begin_x->set_restore_value(true);
  // number.template:
  //   platform: template
  //   name: Entry Zone 1 End X
  //   id: entry_zone_1_end_x
  //   max_value: 6000.0
  //   min_value: -6000.0
  //   unit_of_measurement: mm
  //   step: 10.0
  //   optimistic: true
  //   restore_value: true
  //   initial_value: 0.0
  //   entity_category: config
  //   disabled_by_default: false
  //   mode: AUTO
  //   update_interval: 60s
  entry_zone_1_end_x = new template_::TemplateNumber();
  entry_zone_1_end_x->set_update_interval(60000);
  entry_zone_1_end_x->set_component_source(LOG_STR("template.number"));
  App.register_component(entry_zone_1_end_x);
  App.register_number(entry_zone_1_end_x);
  entry_zone_1_end_x->set_name("Entry Zone 1 End X", 2520887959UL);
  entry_zone_1_end_x->set_entity_category(::ENTITY_CATEGORY_CONFIG);
  entry_zone_1_end_x->traits.set_min_value(-6000.0f);
  entry_zone_1_end_x->traits.set_max_value(6000.0f);
  entry_zone_1_end_x->traits.set_step(10.0f);
  entry_zone_1_end_x->traits.set_mode(number::NUMBER_MODE_AUTO);
  entry_zone_1_end_x->traits.set_unit_of_measurement("mm");
  entry_zone_1_end_x->set_optimistic(true);
  entry_zone_1_end_x->set_initial_value(0.0f);
  entry_zone_1_end_x->set_restore_value(true);
  // number.template:
  //   platform: template
  //   name: Entry Zone 1 Begin Y
  //   id: entry_zone_1_begin_y
  //   max_value: 6000.0
  //   min_value: -1560.0
  //   unit_of_measurement: mm
  //   step: 10.0
  //   optimistic: true
  //   restore_value: true
  //   initial_value: 0.0
  //   entity_category: config
  //   disabled_by_default: false
  //   mode: AUTO
  //   update_interval: 60s
  entry_zone_1_begin_y = new template_::TemplateNumber();
  entry_zone_1_begin_y->set_update_interval(60000);
  entry_zone_1_begin_y->set_component_source(LOG_STR("template.number"));
  App.register_component(entry_zone_1_begin_y);
  App.register_number(entry_zone_1_begin_y);
  entry_zone_1_begin_y->set_name("Entry Zone 1 Begin Y", 1446671178);
  entry_zone_1_begin_y->set_entity_category(::ENTITY_CATEGORY_CONFIG);
  entry_zone_1_begin_y->traits.set_min_value(-1560.0f);
  entry_zone_1_begin_y->traits.set_max_value(6000.0f);
  entry_zone_1_begin_y->traits.set_step(10.0f);
  entry_zone_1_begin_y->traits.set_mode(number::NUMBER_MODE_AUTO);
  entry_zone_1_begin_y->traits.set_unit_of_measurement("mm");
  entry_zone_1_begin_y->set_optimistic(true);
  entry_zone_1_begin_y->set_initial_value(0.0f);
  entry_zone_1_begin_y->set_restore_value(true);
  // number.template:
  //   platform: template
  //   name: Entry Zone 1 End Y
  //   id: entry_zone_1_end_y
  //   max_value: 6000.0
  //   min_value: -1560.0
  //   unit_of_measurement: mm
  //   step: 10.0
  //   optimistic: true
  //   restore_value: true
  //   initial_value: 0.0
  //   entity_category: config
  //   disabled_by_default: false
  //   mode: AUTO
  //   update_interval: 60s
  entry_zone_1_end_y = new template_::TemplateNumber();
  entry_zone_1_end_y->set_update_interval(60000);
  entry_zone_1_end_y->set_component_source(LOG_STR("template.number"));
  App.register_component(entry_zone_1_end_y);
  App.register_number(entry_zone_1_end_y);
  entry_zone_1_end_y->set_name("Entry Zone 1 End Y", 2520887958UL);
  entry_zone_1_end_y->set_entity_category(::ENTITY_CATEGORY_CONFIG);
  entry_zone_1_end_y->traits.set_min_value(-1560.0f);
  entry_zone_1_end_y->traits.set_max_value(6000.0f);
  entry_zone_1_end_y->traits.set_step(10.0f);
  entry_zone_1_end_y->traits.set_mode(number::NUMBER_MODE_AUTO);
  entry_zone_1_end_y->traits.set_unit_of_measurement("mm");
  entry_zone_1_end_y->set_optimistic(true);
  entry_zone_1_end_y->set_initial_value(0.0f);
  entry_zone_1_end_y->set_restore_value(true);
  // number.template:
  //   platform: template
  //   name: Entry Zone 2 Begin X
  //   id: entry_zone_2_begin_x
  //   max_value: 6000.0
  //   min_value: -6000.0
  //   unit_of_measurement: mm
  //   step: 10.0
  //   optimistic: true
  //   restore_value: true
  //   initial_value: 0.0
  //   disabled_by_default: true
  //   entity_category: config
  //   mode: AUTO
  //   update_interval: 60s
  entry_zone_2_begin_x = new template_::TemplateNumber();
  entry_zone_2_begin_x->set_update_interval(60000);
  entry_zone_2_begin_x->set_component_source(LOG_STR("template.number"));
  App.register_component(entry_zone_2_begin_x);
  App.register_number(entry_zone_2_begin_x);
  entry_zone_2_begin_x->set_name("Entry Zone 2 Begin X", 3760522008UL);
  entry_zone_2_begin_x->set_disabled_by_default(true);
  entry_zone_2_begin_x->set_entity_category(::ENTITY_CATEGORY_CONFIG);
  entry_zone_2_begin_x->traits.set_min_value(-6000.0f);
  entry_zone_2_begin_x->traits.set_max_value(6000.0f);
  entry_zone_2_begin_x->traits.set_step(10.0f);
  entry_zone_2_begin_x->traits.set_mode(number::NUMBER_MODE_AUTO);
  entry_zone_2_begin_x->traits.set_unit_of_measurement("mm");
  entry_zone_2_begin_x->set_optimistic(true);
  entry_zone_2_begin_x->set_initial_value(0.0f);
  entry_zone_2_begin_x->set_restore_value(true);
  // number.template:
  //   platform: template
  //   name: Entry Zone 2 End X
  //   id: entry_zone_2_end_x
  //   max_value: 6000.0
  //   min_value: -6000.0
  //   unit_of_measurement: mm
  //   step: 10.0
  //   optimistic: true
  //   restore_value: true
  //   initial_value: 0.0
  //   disabled_by_default: true
  //   entity_category: config
  //   mode: AUTO
  //   update_interval: 60s
  entry_zone_2_end_x = new template_::TemplateNumber();
  entry_zone_2_end_x->set_update_interval(60000);
  entry_zone_2_end_x->set_component_source(LOG_STR("template.number"));
  App.register_component(entry_zone_2_end_x);
  App.register_number(entry_zone_2_end_x);
  entry_zone_2_end_x->set_name("Entry Zone 2 End X", 3557760768UL);
  entry_zone_2_end_x->set_disabled_by_default(true);
  entry_zone_2_end_x->set_entity_category(::ENTITY_CATEGORY_CONFIG);
  entry_zone_2_end_x->traits.set_min_value(-6000.0f);
  entry_zone_2_end_x->traits.set_max_value(6000.0f);
  entry_zone_2_end_x->traits.set_step(10.0f);
  entry_zone_2_end_x->traits.set_mode(number::NUMBER_MODE_AUTO);
  entry_zone_2_end_x->traits.set_unit_of_measurement("mm");
  entry_zone_2_end_x->set_optimistic(true);
  entry_zone_2_end_x->set_initial_value(0.0f);
  entry_zone_2_end_x->set_restore_value(true);
  // number.template:
  //   platform: template
  //   name: Entry Zone 2 Begin Y
  //   id: entry_zone_2_begin_y
  //   max_value: 6000.0
  //   min_value: -1560.0
  //   unit_of_measurement: mm
  //   step: 10.0
  //   optimistic: true
  //   restore_value: true
  //   initial_value: 0.0
  //   disabled_by_default: true
  //   entity_category: config
  //   mode: AUTO
  //   update_interval: 60s
  entry_zone_2_begin_y = new template_::TemplateNumber();
  entry_zone_2_begin_y->set_update_interval(60000);
  entry_zone_2_begin_y->set_component_source(LOG_STR("template.number"));
  App.register_component(entry_zone_2_begin_y);
  App.register_number(entry_zone_2_begin_y);
  entry_zone_2_begin_y->set_name("Entry Zone 2 Begin Y", 3760522009UL);
  entry_zone_2_begin_y->set_disabled_by_default(true);
  entry_zone_2_begin_y->set_entity_category(::ENTITY_CATEGORY_CONFIG);
  entry_zone_2_begin_y->traits.set_min_value(-1560.0f);
  entry_zone_2_begin_y->traits.set_max_value(6000.0f);
  entry_zone_2_begin_y->traits.set_step(10.0f);
  entry_zone_2_begin_y->traits.set_mode(number::NUMBER_MODE_AUTO);
  entry_zone_2_begin_y->traits.set_unit_of_measurement("mm");
  entry_zone_2_begin_y->set_optimistic(true);
  entry_zone_2_begin_y->set_initial_value(0.0f);
  entry_zone_2_begin_y->set_restore_value(true);
  // number.template:
  //   platform: template
  //   name: Entry Zone 2 End Y
  //   id: entry_zone_2_end_y
  //   max_value: 6000.0
  //   min_value: -1560.0
  //   unit_of_measurement: mm
  //   step: 10.0
  //   optimistic: true
  //   restore_value: true
  //   initial_value: 0.0
  //   disabled_by_default: true
  //   entity_category: config
  //   mode: AUTO
  //   update_interval: 60s
  entry_zone_2_end_y = new template_::TemplateNumber();
  entry_zone_2_end_y->set_update_interval(60000);
  entry_zone_2_end_y->set_component_source(LOG_STR("template.number"));
  App.register_component(entry_zone_2_end_y);
  App.register_number(entry_zone_2_end_y);
  entry_zone_2_end_y->set_name("Entry Zone 2 End Y", 3557760769UL);
  entry_zone_2_end_y->set_disabled_by_default(true);
  entry_zone_2_end_y->set_entity_category(::ENTITY_CATEGORY_CONFIG);
  entry_zone_2_end_y->traits.set_min_value(-1560.0f);
  entry_zone_2_end_y->traits.set_max_value(6000.0f);
  entry_zone_2_end_y->traits.set_step(10.0f);
  entry_zone_2_end_y->traits.set_mode(number::NUMBER_MODE_AUTO);
  entry_zone_2_end_y->traits.set_unit_of_measurement("mm");
  entry_zone_2_end_y->set_optimistic(true);
  entry_zone_2_end_y->set_initial_value(0.0f);
  entry_zone_2_end_y->set_restore_value(true);
  // number.template:
  //   platform: template
  //   name: Zone 1 Begin X
  //   id: zone1_begin_x
  //   max_value: 6000.0
  //   min_value: -6000.0
  //   unit_of_measurement: mm
  //   step: 10.0
  //   optimistic: true
  //   restore_value: true
  //   initial_value: -4000.0
  //   entity_category: config
  //   disabled_by_default: false
  //   mode: AUTO
  //   update_interval: 60s
  zone1_begin_x = new template_::TemplateNumber();
  zone1_begin_x->set_update_interval(60000);
  zone1_begin_x->set_component_source(LOG_STR("template.number"));
  App.register_component(zone1_begin_x);
  App.register_number(zone1_begin_x);
  zone1_begin_x->set_name("Zone 1 Begin X", 531353404);
  zone1_begin_x->set_entity_category(::ENTITY_CATEGORY_CONFIG);
  zone1_begin_x->traits.set_min_value(-6000.0f);
  zone1_begin_x->traits.set_max_value(6000.0f);
  zone1_begin_x->traits.set_step(10.0f);
  zone1_begin_x->traits.set_mode(number::NUMBER_MODE_AUTO);
  zone1_begin_x->traits.set_unit_of_measurement("mm");
  zone1_begin_x->set_optimistic(true);
  zone1_begin_x->set_initial_value(-4000.0f);
  zone1_begin_x->set_restore_value(true);
  // number.template:
  //   platform: template
  //   name: Zone 1 End X
  //   id: zone1_end_x
  //   max_value: 6000.0
  //   min_value: -6000.0
  //   unit_of_measurement: mm
  //   step: 10.0
  //   optimistic: true
  //   restore_value: true
  //   initial_value: 4000.0
  //   entity_category: config
  //   disabled_by_default: false
  //   mode: AUTO
  //   update_interval: 60s
  zone1_end_x = new template_::TemplateNumber();
  zone1_end_x->set_update_interval(60000);
  zone1_end_x->set_component_source(LOG_STR("template.number"));
  App.register_component(zone1_end_x);
  App.register_number(zone1_end_x);
  zone1_end_x->set_name("Zone 1 End X", 1872841156);
  zone1_end_x->set_entity_category(::ENTITY_CATEGORY_CONFIG);
  zone1_end_x->traits.set_min_value(-6000.0f);
  zone1_end_x->traits.set_max_value(6000.0f);
  zone1_end_x->traits.set_step(10.0f);
  zone1_end_x->traits.set_mode(number::NUMBER_MODE_AUTO);
  zone1_end_x->traits.set_unit_of_measurement("mm");
  zone1_end_x->set_optimistic(true);
  zone1_end_x->set_initial_value(4000.0f);
  zone1_end_x->set_restore_value(true);
  // number.template:
  //   platform: template
  //   name: Zone 1 Begin Y
  //   id: zone1_begin_y
  //   max_value: 6000.0
  //   min_value: -1560.0
  //   unit_of_measurement: mm
  //   step: 10.0
  //   optimistic: true
  //   restore_value: true
  //   initial_value: 0.0
  //   entity_category: config
  //   disabled_by_default: false
  //   mode: AUTO
  //   update_interval: 60s
  zone1_begin_y = new template_::TemplateNumber();
  zone1_begin_y->set_update_interval(60000);
  zone1_begin_y->set_component_source(LOG_STR("template.number"));
  App.register_component(zone1_begin_y);
  App.register_number(zone1_begin_y);
  zone1_begin_y->set_name("Zone 1 Begin Y", 531353405);
  zone1_begin_y->set_entity_category(::ENTITY_CATEGORY_CONFIG);
  zone1_begin_y->traits.set_min_value(-1560.0f);
  zone1_begin_y->traits.set_max_value(6000.0f);
  zone1_begin_y->traits.set_step(10.0f);
  zone1_begin_y->traits.set_mode(number::NUMBER_MODE_AUTO);
  zone1_begin_y->traits.set_unit_of_measurement("mm");
  zone1_begin_y->set_optimistic(true);
  zone1_begin_y->set_initial_value(0.0f);
  zone1_begin_y->set_restore_value(true);
  // number.template:
  //   platform: template
  //   name: Zone 1 End Y
  //   id: zone1_end_y
  //   max_value: 6000.0
  //   min_value: -1560.0
  //   unit_of_measurement: mm
  //   step: 10.0
  //   optimistic: true
  //   restore_value: true
  //   initial_value: 6000.0
  //   entity_category: config
  //   disabled_by_default: false
  //   mode: AUTO
  //   update_interval: 60s
  zone1_end_y = new template_::TemplateNumber();
  zone1_end_y->set_update_interval(60000);
  zone1_end_y->set_component_source(LOG_STR("template.number"));
  App.register_component(zone1_end_y);
  App.register_number(zone1_end_y);
  zone1_end_y->set_name("Zone 1 End Y", 1872841157);
  zone1_end_y->set_entity_category(::ENTITY_CATEGORY_CONFIG);
  zone1_end_y->traits.set_min_value(-1560.0f);
  zone1_end_y->traits.set_max_value(6000.0f);
  zone1_end_y->traits.set_step(10.0f);
  zone1_end_y->traits.set_mode(number::NUMBER_MODE_AUTO);
  zone1_end_y->traits.set_unit_of_measurement("mm");
  zone1_end_y->set_optimistic(true);
  zone1_end_y->set_initial_value(6000.0f);
  zone1_end_y->set_restore_value(true);
  // number.template:
  //   platform: template
  //   name: Zone 1 Occupancy Off Delay
  //   id: zone_1_off_delay
  //   max_value: 600.0
  //   min_value: 0.0
  //   step: 1.0
  //   optimistic: true
  //   restore_value: true
  //   unit_of_measurement: s
  //   initial_value: 15.0
  //   entity_category: config
  //   disabled_by_default: false
  //   mode: AUTO
  //   update_interval: 60s
  zone_1_off_delay = new template_::TemplateNumber();
  zone_1_off_delay->set_update_interval(60000);
  zone_1_off_delay->set_component_source(LOG_STR("template.number"));
  App.register_component(zone_1_off_delay);
  App.register_number(zone_1_off_delay);
  zone_1_off_delay->set_name("Zone 1 Occupancy Off Delay", 1936767271);
  zone_1_off_delay->set_entity_category(::ENTITY_CATEGORY_CONFIG);
  zone_1_off_delay->traits.set_min_value(0.0f);
  zone_1_off_delay->traits.set_max_value(600.0f);
  zone_1_off_delay->traits.set_step(1.0f);
  zone_1_off_delay->traits.set_mode(number::NUMBER_MODE_AUTO);
  zone_1_off_delay->traits.set_unit_of_measurement("s");
  zone_1_off_delay->set_optimistic(true);
  zone_1_off_delay->set_initial_value(15.0f);
  zone_1_off_delay->set_restore_value(true);
  // number.template:
  //   platform: template
  //   name: Zone 2 Begin X
  //   id: zone2_begin_x
  //   max_value: 6000.0
  //   min_value: -6000.0
  //   unit_of_measurement: mm
  //   step: 10.0
  //   optimistic: true
  //   restore_value: true
  //   disabled_by_default: true
  //   entity_category: config
  //   mode: AUTO
  //   update_interval: 60s
  //   initial_value: -6000.0
  zone2_begin_x = new template_::TemplateNumber();
  zone2_begin_x->set_update_interval(60000);
  zone2_begin_x->set_component_source(LOG_STR("template.number"));
  App.register_component(zone2_begin_x);
  App.register_number(zone2_begin_x);
  zone2_begin_x->set_name("Zone 2 Begin X", 3300679359UL);
  zone2_begin_x->set_disabled_by_default(true);
  zone2_begin_x->set_entity_category(::ENTITY_CATEGORY_CONFIG);
  zone2_begin_x->traits.set_min_value(-6000.0f);
  zone2_begin_x->traits.set_max_value(6000.0f);
  zone2_begin_x->traits.set_step(10.0f);
  zone2_begin_x->traits.set_mode(number::NUMBER_MODE_AUTO);
  zone2_begin_x->traits.set_unit_of_measurement("mm");
  zone2_begin_x->set_optimistic(true);
  zone2_begin_x->set_initial_value(-6000.0f);
  zone2_begin_x->set_restore_value(true);
  // number.template:
  //   platform: template
  //   name: Zone 2 End X
  //   id: zone2_end_x
  //   max_value: 6000.0
  //   min_value: -6000.0
  //   unit_of_measurement: mm
  //   step: 10.0
  //   optimistic: true
  //   restore_value: true
  //   disabled_by_default: true
  //   entity_category: config
  //   mode: AUTO
  //   update_interval: 60s
  //   initial_value: -6000.0
  zone2_end_x = new template_::TemplateNumber();
  zone2_end_x->set_update_interval(60000);
  zone2_end_x->set_component_source(LOG_STR("template.number"));
  App.register_component(zone2_end_x);
  App.register_number(zone2_end_x);
  zone2_end_x->set_name("Zone 2 End X", 3530811771UL);
  zone2_end_x->set_disabled_by_default(true);
  zone2_end_x->set_entity_category(::ENTITY_CATEGORY_CONFIG);
  zone2_end_x->traits.set_min_value(-6000.0f);
  zone2_end_x->traits.set_max_value(6000.0f);
  zone2_end_x->traits.set_step(10.0f);
  zone2_end_x->traits.set_mode(number::NUMBER_MODE_AUTO);
  zone2_end_x->traits.set_unit_of_measurement("mm");
  zone2_end_x->set_optimistic(true);
  zone2_end_x->set_initial_value(-6000.0f);
  zone2_end_x->set_restore_value(true);
  // number.template:
  //   platform: template
  //   name: Zone 2 Begin Y
  //   id: zone2_begin_y
  //   max_value: 6000.0
  //   min_value: -1560.0
  //   unit_of_measurement: mm
  //   step: 10.0
  //   optimistic: true
  //   restore_value: true
  //   disabled_by_default: true
  //   entity_category: config
  //   mode: AUTO
  //   update_interval: 60s
  //   initial_value: -1560.0
  zone2_begin_y = new template_::TemplateNumber();
  zone2_begin_y->set_update_interval(60000);
  zone2_begin_y->set_component_source(LOG_STR("template.number"));
  App.register_component(zone2_begin_y);
  App.register_number(zone2_begin_y);
  zone2_begin_y->set_name("Zone 2 Begin Y", 3300679358UL);
  zone2_begin_y->set_disabled_by_default(true);
  zone2_begin_y->set_entity_category(::ENTITY_CATEGORY_CONFIG);
  zone2_begin_y->traits.set_min_value(-1560.0f);
  zone2_begin_y->traits.set_max_value(6000.0f);
  zone2_begin_y->traits.set_step(10.0f);
  zone2_begin_y->traits.set_mode(number::NUMBER_MODE_AUTO);
  zone2_begin_y->traits.set_unit_of_measurement("mm");
  zone2_begin_y->set_optimistic(true);
  zone2_begin_y->set_initial_value(-1560.0f);
  zone2_begin_y->set_restore_value(true);
  // number.template:
  //   platform: template
  //   name: Zone 2 End Y
  //   id: zone2_end_y
  //   max_value: 6000.0
  //   min_value: -1560.0
  //   unit_of_measurement: mm
  //   step: 10.0
  //   optimistic: true
  //   restore_value: true
  //   disabled_by_default: true
  //   entity_category: config
  //   mode: AUTO
  //   update_interval: 60s
  //   initial_value: -1560.0
  zone2_end_y = new template_::TemplateNumber();
  zone2_end_y->set_update_interval(60000);
  zone2_end_y->set_component_source(LOG_STR("template.number"));
  App.register_component(zone2_end_y);
  App.register_number(zone2_end_y);
  zone2_end_y->set_name("Zone 2 End Y", 3530811770UL);
  zone2_end_y->set_disabled_by_default(true);
  zone2_end_y->set_entity_category(::ENTITY_CATEGORY_CONFIG);
  zone2_end_y->traits.set_min_value(-1560.0f);
  zone2_end_y->traits.set_max_value(6000.0f);
  zone2_end_y->traits.set_step(10.0f);
  zone2_end_y->traits.set_mode(number::NUMBER_MODE_AUTO);
  zone2_end_y->traits.set_unit_of_measurement("mm");
  zone2_end_y->set_optimistic(true);
  zone2_end_y->set_initial_value(-1560.0f);
  zone2_end_y->set_restore_value(true);
  // number.template:
  //   platform: template
  //   name: Zone 2 Occupancy Off Delay
  //   id: zone_2_off_delay
  //   max_value: 600.0
  //   min_value: 0.0
  //   step: 1.0
  //   optimistic: true
  //   restore_value: true
  //   unit_of_measurement: s
  //   initial_value: 15.0
  //   disabled_by_default: true
  //   entity_category: config
  //   mode: AUTO
  //   update_interval: 60s
  zone_2_off_delay = new template_::TemplateNumber();
  zone_2_off_delay->set_update_interval(60000);
  zone_2_off_delay->set_component_source(LOG_STR("template.number"));
  App.register_component(zone_2_off_delay);
  App.register_number(zone_2_off_delay);
  zone_2_off_delay->set_name("Zone 2 Occupancy Off Delay", 1625125156);
  zone_2_off_delay->set_disabled_by_default(true);
  zone_2_off_delay->set_entity_category(::ENTITY_CATEGORY_CONFIG);
  zone_2_off_delay->traits.set_min_value(0.0f);
  zone_2_off_delay->traits.set_max_value(600.0f);
  zone_2_off_delay->traits.set_step(1.0f);
  zone_2_off_delay->traits.set_mode(number::NUMBER_MODE_AUTO);
  zone_2_off_delay->traits.set_unit_of_measurement("s");
  zone_2_off_delay->set_optimistic(true);
  zone_2_off_delay->set_initial_value(15.0f);
  zone_2_off_delay->set_restore_value(true);
  // number.template:
  //   platform: template
  //   name: Zone 3 Begin X
  //   id: zone3_begin_x
  //   max_value: 6000.0
  //   min_value: -6000.0
  //   unit_of_measurement: mm
  //   step: 10.0
  //   optimistic: true
  //   restore_value: true
  //   disabled_by_default: true
  //   entity_category: config
  //   mode: AUTO
  //   update_interval: 60s
  //   initial_value: -6000.0
  zone3_begin_x = new template_::TemplateNumber();
  zone3_begin_x->set_update_interval(60000);
  zone3_begin_x->set_component_source(LOG_STR("template.number"));
  App.register_component(zone3_begin_x);
  App.register_number(zone3_begin_x);
  zone3_begin_x->set_name("Zone 3 Begin X", 792566678);
  zone3_begin_x->set_disabled_by_default(true);
  zone3_begin_x->set_entity_category(::ENTITY_CATEGORY_CONFIG);
  zone3_begin_x->traits.set_min_value(-6000.0f);
  zone3_begin_x->traits.set_max_value(6000.0f);
  zone3_begin_x->traits.set_step(10.0f);
  zone3_begin_x->traits.set_mode(number::NUMBER_MODE_AUTO);
  zone3_begin_x->traits.set_unit_of_measurement("mm");
  zone3_begin_x->set_optimistic(true);
  zone3_begin_x->set_initial_value(-6000.0f);
  zone3_begin_x->set_restore_value(true);
  // number.template:
  //   platform: template
  //   name: Zone 3 End X
  //   id: zone3_end_x
  //   max_value: 6000.0
  //   min_value: -6000.0
  //   unit_of_measurement: mm
  //   step: 10.0
  //   optimistic: true
  //   restore_value: true
  //   disabled_by_default: true
  //   entity_category: config
  //   mode: AUTO
  //   update_interval: 60s
  //   initial_value: -6000.0
  zone3_end_x = new template_::TemplateNumber();
  zone3_end_x->set_update_interval(60000);
  zone3_end_x->set_component_source(LOG_STR("template.number"));
  App.register_component(zone3_end_x);
  App.register_number(zone3_end_x);
  zone3_end_x->set_name("Zone 3 End X", 1051491734);
  zone3_end_x->set_disabled_by_default(true);
  zone3_end_x->set_entity_category(::ENTITY_CATEGORY_CONFIG);
  zone3_end_x->traits.set_min_value(-6000.0f);
  zone3_end_x->traits.set_max_value(6000.0f);
  zone3_end_x->traits.set_step(10.0f);
  zone3_end_x->traits.set_mode(number::NUMBER_MODE_AUTO);
  zone3_end_x->traits.set_unit_of_measurement("mm");
  zone3_end_x->set_optimistic(true);
  zone3_end_x->set_initial_value(-6000.0f);
  zone3_end_x->set_restore_value(true);
  // number.template:
  //   platform: template
  //   name: Zone 3 Begin Y
  //   id: zone3_begin_y
  //   max_value: 6000.0
  //   min_value: -1560.0
  //   unit_of_measurement: mm
  //   step: 10.0
  //   optimistic: true
  //   restore_value: true
  //   disabled_by_default: true
  //   entity_category: config
  //   mode: AUTO
  //   update_interval: 60s
  //   initial_value: -1560.0
  zone3_begin_y = new template_::TemplateNumber();
  zone3_begin_y->set_update_interval(60000);
  zone3_begin_y->set_component_source(LOG_STR("template.number"));
  App.register_component(zone3_begin_y);
  App.register_number(zone3_begin_y);
  zone3_begin_y->set_name("Zone 3 Begin Y", 792566679);
  zone3_begin_y->set_disabled_by_default(true);
  zone3_begin_y->set_entity_category(::ENTITY_CATEGORY_CONFIG);
  zone3_begin_y->traits.set_min_value(-1560.0f);
  zone3_begin_y->traits.set_max_value(6000.0f);
  zone3_begin_y->traits.set_step(10.0f);
  zone3_begin_y->traits.set_mode(number::NUMBER_MODE_AUTO);
  zone3_begin_y->traits.set_unit_of_measurement("mm");
  zone3_begin_y->set_optimistic(true);
  zone3_begin_y->set_initial_value(-1560.0f);
  zone3_begin_y->set_restore_value(true);
  // number.template:
  //   platform: template
  //   name: Zone 3 End Y
  //   id: zone3_end_y
  //   max_value: 6000.0
  //   min_value: -1560.0
  //   unit_of_measurement: mm
  //   step: 10.0
  //   optimistic: true
  //   restore_value: true
  //   disabled_by_default: true
  //   entity_category: config
  //   mode: AUTO
  //   update_interval: 60s
  //   initial_value: -1560.0
  zone3_end_y = new template_::TemplateNumber();
  zone3_end_y->set_update_interval(60000);
  zone3_end_y->set_component_source(LOG_STR("template.number"));
  App.register_component(zone3_end_y);
  App.register_number(zone3_end_y);
  zone3_end_y->set_name("Zone 3 End Y", 1051491735);
  zone3_end_y->set_disabled_by_default(true);
  zone3_end_y->set_entity_category(::ENTITY_CATEGORY_CONFIG);
  zone3_end_y->traits.set_min_value(-1560.0f);
  zone3_end_y->traits.set_max_value(6000.0f);
  zone3_end_y->traits.set_step(10.0f);
  zone3_end_y->traits.set_mode(number::NUMBER_MODE_AUTO);
  zone3_end_y->traits.set_unit_of_measurement("mm");
  zone3_end_y->set_optimistic(true);
  zone3_end_y->set_initial_value(-1560.0f);
  zone3_end_y->set_restore_value(true);
  // number.template:
  //   platform: template
  //   name: Zone 3 Occupancy Off Delay
  //   id: zone_3_off_delay
  //   max_value: 600.0
  //   min_value: 0.0
  //   step: 1.0
  //   optimistic: true
  //   restore_value: true
  //   unit_of_measurement: s
  //   initial_value: 15.0
  //   disabled_by_default: true
  //   entity_category: config
  //   mode: AUTO
  //   update_interval: 60s
  zone_3_off_delay = new template_::TemplateNumber();
  zone_3_off_delay->set_update_interval(60000);
  zone_3_off_delay->set_component_source(LOG_STR("template.number"));
  App.register_component(zone_3_off_delay);
  App.register_number(zone_3_off_delay);
  zone_3_off_delay->set_name("Zone 3 Occupancy Off Delay", 3236279705UL);
  zone_3_off_delay->set_disabled_by_default(true);
  zone_3_off_delay->set_entity_category(::ENTITY_CATEGORY_CONFIG);
  zone_3_off_delay->traits.set_min_value(0.0f);
  zone_3_off_delay->traits.set_max_value(600.0f);
  zone_3_off_delay->traits.set_step(1.0f);
  zone_3_off_delay->traits.set_mode(number::NUMBER_MODE_AUTO);
  zone_3_off_delay->traits.set_unit_of_measurement("s");
  zone_3_off_delay->set_optimistic(true);
  zone_3_off_delay->set_initial_value(15.0f);
  zone_3_off_delay->set_restore_value(true);
  // number.template:
  //   platform: template
  //   name: Zone 4 Begin X
  //   id: zone4_begin_x
  //   max_value: 6000.0
  //   min_value: -6000.0
  //   unit_of_measurement: mm
  //   step: 10.0
  //   optimistic: true
  //   restore_value: true
  //   disabled_by_default: true
  //   entity_category: config
  //   mode: AUTO
  //   update_interval: 60s
  //   initial_value: -6000.0
  zone4_begin_x = new template_::TemplateNumber();
  zone4_begin_x->set_update_interval(60000);
  zone4_begin_x->set_component_source(LOG_STR("template.number"));
  App.register_component(zone4_begin_x);
  App.register_number(zone4_begin_x);
  zone4_begin_x->set_name("Zone 4 Begin X", 1165292657);
  zone4_begin_x->set_disabled_by_default(true);
  zone4_begin_x->set_entity_category(::ENTITY_CATEGORY_CONFIG);
  zone4_begin_x->traits.set_min_value(-6000.0f);
  zone4_begin_x->traits.set_max_value(6000.0f);
  zone4_begin_x->traits.set_step(10.0f);
  zone4_begin_x->traits.set_mode(number::NUMBER_MODE_AUTO);
  zone4_begin_x->traits.set_unit_of_measurement("mm");
  zone4_begin_x->set_optimistic(true);
  zone4_begin_x->set_initial_value(-6000.0f);
  zone4_begin_x->set_restore_value(true);
  // number.template:
  //   platform: template
  //   name: Zone 4 End X
  //   id: zone4_end_x
  //   max_value: 6000.0
  //   min_value: -6000.0
  //   unit_of_measurement: mm
  //   step: 10.0
  //   optimistic: true
  //   restore_value: true
  //   disabled_by_default: true
  //   entity_category: config
  //   mode: AUTO
  //   update_interval: 60s
  //   initial_value: -6000.0
  zone4_end_x = new template_::TemplateNumber();
  zone4_end_x->set_update_interval(60000);
  zone4_end_x->set_component_source(LOG_STR("template.number"));
  App.register_component(zone4_end_x);
  App.register_number(zone4_end_x);
  zone4_end_x->set_name("Zone 4 End X", 908582381);
  zone4_end_x->set_disabled_by_default(true);
  zone4_end_x->set_entity_category(::ENTITY_CATEGORY_CONFIG);
  zone4_end_x->traits.set_min_value(-6000.0f);
  zone4_end_x->traits.set_max_value(6000.0f);
  zone4_end_x->traits.set_step(10.0f);
  zone4_end_x->traits.set_mode(number::NUMBER_MODE_AUTO);
  zone4_end_x->traits.set_unit_of_measurement("mm");
  zone4_end_x->set_optimistic(true);
  zone4_end_x->set_initial_value(-6000.0f);
  zone4_end_x->set_restore_value(true);
  // number.template:
  //   platform: template
  //   name: Zone 4 Begin Y
  //   id: zone4_begin_y
  //   max_value: 6000.0
  //   min_value: -1560.0
  //   unit_of_measurement: mm
  //   step: 10.0
  //   optimistic: true
  //   restore_value: true
  //   disabled_by_default: true
  //   entity_category: config
  //   mode: AUTO
  //   update_interval: 60s
  //   initial_value: -1560.0
  zone4_begin_y = new template_::TemplateNumber();
  zone4_begin_y->set_update_interval(60000);
  zone4_begin_y->set_component_source(LOG_STR("template.number"));
  App.register_component(zone4_begin_y);
  App.register_number(zone4_begin_y);
  zone4_begin_y->set_name("Zone 4 Begin Y", 1165292656);
  zone4_begin_y->set_disabled_by_default(true);
  zone4_begin_y->set_entity_category(::ENTITY_CATEGORY_CONFIG);
  zone4_begin_y->traits.set_min_value(-1560.0f);
  zone4_begin_y->traits.set_max_value(6000.0f);
  zone4_begin_y->traits.set_step(10.0f);
  zone4_begin_y->traits.set_mode(number::NUMBER_MODE_AUTO);
  zone4_begin_y->traits.set_unit_of_measurement("mm");
  zone4_begin_y->set_optimistic(true);
  zone4_begin_y->set_initial_value(-1560.0f);
  zone4_begin_y->set_restore_value(true);
  // number.template:
  //   platform: template
  //   name: Zone 4 End Y
  //   id: zone4_end_y
  //   max_value: 6000.0
  //   min_value: -1560.0
  //   unit_of_measurement: mm
  //   step: 10.0
  //   optimistic: true
  //   restore_value: true
  //   disabled_by_default: true
  //   entity_category: config
  //   mode: AUTO
  //   update_interval: 60s
  //   initial_value: -1560.0
  zone4_end_y = new template_::TemplateNumber();
  zone4_end_y->set_update_interval(60000);
  zone4_end_y->set_component_source(LOG_STR("template.number"));
  App.register_component(zone4_end_y);
  App.register_number(zone4_end_y);
  zone4_end_y->set_name("Zone 4 End Y", 908582380);
  zone4_end_y->set_disabled_by_default(true);
  zone4_end_y->set_entity_category(::ENTITY_CATEGORY_CONFIG);
  zone4_end_y->traits.set_min_value(-1560.0f);
  zone4_end_y->traits.set_max_value(6000.0f);
  zone4_end_y->traits.set_step(10.0f);
  zone4_end_y->traits.set_mode(number::NUMBER_MODE_AUTO);
  zone4_end_y->traits.set_unit_of_measurement("mm");
  zone4_end_y->set_optimistic(true);
  zone4_end_y->set_initial_value(-1560.0f);
  zone4_end_y->set_restore_value(true);
  // number.template:
  //   platform: template
  //   name: Zone 4 Occupancy Off Delay
  //   id: zone_4_off_delay
  //   max_value: 600.0
  //   min_value: 0.0
  //   step: 1.0
  //   optimistic: true
  //   restore_value: true
  //   unit_of_measurement: s
  //   initial_value: 15.0
  //   disabled_by_default: true
  //   entity_category: config
  //   mode: AUTO
  //   update_interval: 60s
  zone_4_off_delay = new template_::TemplateNumber();
  zone_4_off_delay->set_update_interval(60000);
  zone_4_off_delay->set_component_source(LOG_STR("template.number"));
  App.register_component(zone_4_off_delay);
  App.register_number(zone_4_off_delay);
  zone_4_off_delay->set_name("Zone 4 Occupancy Off Delay", 677608606);
  zone_4_off_delay->set_disabled_by_default(true);
  zone_4_off_delay->set_entity_category(::ENTITY_CATEGORY_CONFIG);
  zone_4_off_delay->traits.set_min_value(0.0f);
  zone_4_off_delay->traits.set_max_value(600.0f);
  zone_4_off_delay->traits.set_step(1.0f);
  zone_4_off_delay->traits.set_mode(number::NUMBER_MODE_AUTO);
  zone_4_off_delay->traits.set_unit_of_measurement("s");
  zone_4_off_delay->set_optimistic(true);
  zone_4_off_delay->set_initial_value(15.0f);
  zone_4_off_delay->set_restore_value(true);
  // number.template:
  //   platform: template
  //   name: Occupancy Mask 1 Begin X
  //   id: occupancy_mask_1_begin_x
  //   max_value: 6000.0
  //   min_value: -6000.0
  //   unit_of_measurement: mm
  //   step: 10.0
  //   optimistic: true
  //   restore_value: true
  //   entity_category: config
  //   disabled_by_default: false
  //   mode: AUTO
  //   update_interval: 60s
  //   initial_value: -6000.0
  occupancy_mask_1_begin_x = new template_::TemplateNumber();
  occupancy_mask_1_begin_x->set_update_interval(60000);
  occupancy_mask_1_begin_x->set_component_source(LOG_STR("template.number"));
  App.register_component(occupancy_mask_1_begin_x);
  App.register_number(occupancy_mask_1_begin_x);
  occupancy_mask_1_begin_x->set_name("Occupancy Mask 1 Begin X", 433199888);
  occupancy_mask_1_begin_x->set_entity_category(::ENTITY_CATEGORY_CONFIG);
  occupancy_mask_1_begin_x->traits.set_min_value(-6000.0f);
  occupancy_mask_1_begin_x->traits.set_max_value(6000.0f);
  occupancy_mask_1_begin_x->traits.set_step(10.0f);
  occupancy_mask_1_begin_x->traits.set_mode(number::NUMBER_MODE_AUTO);
  occupancy_mask_1_begin_x->traits.set_unit_of_measurement("mm");
  occupancy_mask_1_begin_x->set_optimistic(true);
  occupancy_mask_1_begin_x->set_initial_value(-6000.0f);
  occupancy_mask_1_begin_x->set_restore_value(true);
  // number.template:
  //   platform: template
  //   name: Occupancy Mask 1 End X
  //   id: occupancy_mask_1_end_x
  //   max_value: 6000.0
  //   min_value: -6000.0
  //   unit_of_measurement: mm
  //   step: 10.0
  //   optimistic: true
  //   restore_value: true
  //   entity_category: config
  //   disabled_by_default: false
  //   mode: AUTO
  //   update_interval: 60s
  //   initial_value: -6000.0
  occupancy_mask_1_end_x = new template_::TemplateNumber();
  occupancy_mask_1_end_x->set_update_interval(60000);
  occupancy_mask_1_end_x->set_component_source(LOG_STR("template.number"));
  App.register_component(occupancy_mask_1_end_x);
  App.register_number(occupancy_mask_1_end_x);
  occupancy_mask_1_end_x->set_name("Occupancy Mask 1 End X", 2823840008UL);
  occupancy_mask_1_end_x->set_entity_category(::ENTITY_CATEGORY_CONFIG);
  occupancy_mask_1_end_x->traits.set_min_value(-6000.0f);
  occupancy_mask_1_end_x->traits.set_max_value(6000.0f);
  occupancy_mask_1_end_x->traits.set_step(10.0f);
  occupancy_mask_1_end_x->traits.set_mode(number::NUMBER_MODE_AUTO);
  occupancy_mask_1_end_x->traits.set_unit_of_measurement("mm");
  occupancy_mask_1_end_x->set_optimistic(true);
  occupancy_mask_1_end_x->set_initial_value(-6000.0f);
  occupancy_mask_1_end_x->set_restore_value(true);
  // number.template:
  //   platform: template
  //   name: Occupancy Mask 1 Begin Y
  //   id: occupancy_mask_1_begin_y
  //   max_value: 6000.0
  //   min_value: -1560.0
  //   unit_of_measurement: mm
  //   step: 10.0
  //   optimistic: true
  //   restore_value: true
  //   entity_category: config
  //   disabled_by_default: false
  //   mode: AUTO
  //   update_interval: 60s
  //   initial_value: -1560.0
  occupancy_mask_1_begin_y = new template_::TemplateNumber();
  occupancy_mask_1_begin_y->set_update_interval(60000);
  occupancy_mask_1_begin_y->set_component_source(LOG_STR("template.number"));
  App.register_component(occupancy_mask_1_begin_y);
  App.register_number(occupancy_mask_1_begin_y);
  occupancy_mask_1_begin_y->set_name("Occupancy Mask 1 Begin Y", 433199889);
  occupancy_mask_1_begin_y->set_entity_category(::ENTITY_CATEGORY_CONFIG);
  occupancy_mask_1_begin_y->traits.set_min_value(-1560.0f);
  occupancy_mask_1_begin_y->traits.set_max_value(6000.0f);
  occupancy_mask_1_begin_y->traits.set_step(10.0f);
  occupancy_mask_1_begin_y->traits.set_mode(number::NUMBER_MODE_AUTO);
  occupancy_mask_1_begin_y->traits.set_unit_of_measurement("mm");
  occupancy_mask_1_begin_y->set_optimistic(true);
  occupancy_mask_1_begin_y->set_initial_value(-1560.0f);
  occupancy_mask_1_begin_y->set_restore_value(true);
  // number.template:
  //   platform: template
  //   name: Occupancy Mask 1 End Y
  //   id: occupancy_mask_1_end_y
  //   max_value: 6000.0
  //   min_value: -1560.0
  //   unit_of_measurement: mm
  //   step: 10.0
  //   optimistic: true
  //   restore_value: true
  //   entity_category: config
  //   disabled_by_default: false
  //   mode: AUTO
  //   update_interval: 60s
  //   initial_value: -1560.0
  occupancy_mask_1_end_y = new template_::TemplateNumber();
  occupancy_mask_1_end_y->set_update_interval(60000);
  occupancy_mask_1_end_y->set_component_source(LOG_STR("template.number"));
  App.register_component(occupancy_mask_1_end_y);
  App.register_number(occupancy_mask_1_end_y);
  occupancy_mask_1_end_y->set_name("Occupancy Mask 1 End Y", 2823840009UL);
  occupancy_mask_1_end_y->set_entity_category(::ENTITY_CATEGORY_CONFIG);
  occupancy_mask_1_end_y->traits.set_min_value(-1560.0f);
  occupancy_mask_1_end_y->traits.set_max_value(6000.0f);
  occupancy_mask_1_end_y->traits.set_step(10.0f);
  occupancy_mask_1_end_y->traits.set_mode(number::NUMBER_MODE_AUTO);
  occupancy_mask_1_end_y->traits.set_unit_of_measurement("mm");
  occupancy_mask_1_end_y->set_optimistic(true);
  occupancy_mask_1_end_y->set_initial_value(-1560.0f);
  occupancy_mask_1_end_y->set_restore_value(true);
  // number.template:
  //   platform: template
  //   name: Occupancy Mask 2 Begin X
  //   id: occupancy_mask_2_begin_x
  //   max_value: 6000.0
  //   min_value: -6000.0
  //   unit_of_measurement: mm
  //   step: 10.0
  //   optimistic: true
  //   restore_value: true
  //   disabled_by_default: true
  //   entity_category: config
  //   mode: AUTO
  //   update_interval: 60s
  //   initial_value: -6000.0
  occupancy_mask_2_begin_x = new template_::TemplateNumber();
  occupancy_mask_2_begin_x->set_update_interval(60000);
  occupancy_mask_2_begin_x->set_component_source(LOG_STR("template.number"));
  App.register_component(occupancy_mask_2_begin_x);
  App.register_number(occupancy_mask_2_begin_x);
  occupancy_mask_2_begin_x->set_name("Occupancy Mask 2 Begin X", 1119172963);
  occupancy_mask_2_begin_x->set_disabled_by_default(true);
  occupancy_mask_2_begin_x->set_entity_category(::ENTITY_CATEGORY_CONFIG);
  occupancy_mask_2_begin_x->traits.set_min_value(-6000.0f);
  occupancy_mask_2_begin_x->traits.set_max_value(6000.0f);
  occupancy_mask_2_begin_x->traits.set_step(10.0f);
  occupancy_mask_2_begin_x->traits.set_mode(number::NUMBER_MODE_AUTO);
  occupancy_mask_2_begin_x->traits.set_unit_of_measurement("mm");
  occupancy_mask_2_begin_x->set_optimistic(true);
  occupancy_mask_2_begin_x->set_initial_value(-6000.0f);
  occupancy_mask_2_begin_x->set_restore_value(true);
  // number.template:
  //   platform: template
  //   name: Occupancy Mask 2 End X
  //   id: occupancy_mask_2_end_x
  //   max_value: 6000.0
  //   min_value: -6000.0
  //   unit_of_measurement: mm
  //   step: 10.0
  //   optimistic: true
  //   restore_value: true
  //   disabled_by_default: true
  //   entity_category: config
  //   mode: AUTO
  //   update_interval: 60s
  //   initial_value: -6000.0
  occupancy_mask_2_end_x = new template_::TemplateNumber();
  occupancy_mask_2_end_x->set_update_interval(60000);
  occupancy_mask_2_end_x->set_component_source(LOG_STR("template.number"));
  App.register_component(occupancy_mask_2_end_x);
  App.register_number(occupancy_mask_2_end_x);
  occupancy_mask_2_end_x->set_name("Occupancy Mask 2 End X", 2008913855);
  occupancy_mask_2_end_x->set_disabled_by_default(true);
  occupancy_mask_2_end_x->set_entity_category(::ENTITY_CATEGORY_CONFIG);
  occupancy_mask_2_end_x->traits.set_min_value(-6000.0f);
  occupancy_mask_2_end_x->traits.set_max_value(6000.0f);
  occupancy_mask_2_end_x->traits.set_step(10.0f);
  occupancy_mask_2_end_x->traits.set_mode(number::NUMBER_MODE_AUTO);
  occupancy_mask_2_end_x->traits.set_unit_of_measurement("mm");
  occupancy_mask_2_end_x->set_optimistic(true);
  occupancy_mask_2_end_x->set_initial_value(-6000.0f);
  occupancy_mask_2_end_x->set_restore_value(true);
  // number.template:
  //   platform: template
  //   name: Occupancy Mask 2 Begin Y
  //   id: occupancy_mask_2_begin_y
  //   max_value: 6000.0
  //   min_value: -1560.0
  //   unit_of_measurement: mm
  //   step: 10.0
  //   optimistic: true
  //   restore_value: true
  //   disabled_by_default: true
  //   entity_category: config
  //   mode: AUTO
  //   update_interval: 60s
  //   initial_value: -1560.0
  occupancy_mask_2_begin_y = new template_::TemplateNumber();
  occupancy_mask_2_begin_y->set_update_interval(60000);
  occupancy_mask_2_begin_y->set_component_source(LOG_STR("template.number"));
  App.register_component(occupancy_mask_2_begin_y);
  App.register_number(occupancy_mask_2_begin_y);
  occupancy_mask_2_begin_y->set_name("Occupancy Mask 2 Begin Y", 1119172962);
  occupancy_mask_2_begin_y->set_disabled_by_default(true);
  occupancy_mask_2_begin_y->set_entity_category(::ENTITY_CATEGORY_CONFIG);
  occupancy_mask_2_begin_y->traits.set_min_value(-1560.0f);
  occupancy_mask_2_begin_y->traits.set_max_value(6000.0f);
  occupancy_mask_2_begin_y->traits.set_step(10.0f);
  occupancy_mask_2_begin_y->traits.set_mode(number::NUMBER_MODE_AUTO);
  occupancy_mask_2_begin_y->traits.set_unit_of_measurement("mm");
  occupancy_mask_2_begin_y->set_optimistic(true);
  occupancy_mask_2_begin_y->set_initial_value(-1560.0f);
  occupancy_mask_2_begin_y->set_restore_value(true);
  // number.template:
  //   platform: template
  //   name: Occupancy Mask 2 End Y
  //   id: occupancy_mask_2_end_y
  //   max_value: 6000.0
  //   min_value: -1560.0
  //   unit_of_measurement: mm
  //   step: 10.0
  //   optimistic: true
  //   restore_value: true
  //   disabled_by_default: true
  //   entity_category: config
  //   mode: AUTO
  //   update_interval: 60s
  //   initial_value: -1560.0
  occupancy_mask_2_end_y = new template_::TemplateNumber();
  occupancy_mask_2_end_y->set_update_interval(60000);
  occupancy_mask_2_end_y->set_component_source(LOG_STR("template.number"));
  App.register_component(occupancy_mask_2_end_y);
  App.register_number(occupancy_mask_2_end_y);
  occupancy_mask_2_end_y->set_name("Occupancy Mask 2 End Y", 2008913854);
  occupancy_mask_2_end_y->set_disabled_by_default(true);
  occupancy_mask_2_end_y->set_entity_category(::ENTITY_CATEGORY_CONFIG);
  occupancy_mask_2_end_y->traits.set_min_value(-1560.0f);
  occupancy_mask_2_end_y->traits.set_max_value(6000.0f);
  occupancy_mask_2_end_y->traits.set_step(10.0f);
  occupancy_mask_2_end_y->traits.set_mode(number::NUMBER_MODE_AUTO);
  occupancy_mask_2_end_y->traits.set_unit_of_measurement("mm");
  occupancy_mask_2_end_y->set_optimistic(true);
  occupancy_mask_2_end_y->set_initial_value(-1560.0f);
  occupancy_mask_2_end_y->set_restore_value(true);
  // number.template:
  //   platform: template
  //   name: Stale Target Reset Timeout
  //   id: aggressive_timeout
  //   min_value: 1.0
  //   max_value: 60.0
  //   step: 1.0
  //   unit_of_measurement: s
  //   optimistic: true
  //   restore_value: true
  //   initial_value: 3.0
  //   entity_category: config
  //   disabled_by_default: false
  //   mode: AUTO
  //   update_interval: 60s
  aggressive_timeout = new template_::TemplateNumber();
  aggressive_timeout->set_update_interval(60000);
  aggressive_timeout->set_component_source(LOG_STR("template.number"));
  App.register_component(aggressive_timeout);
  App.register_number(aggressive_timeout);
  aggressive_timeout->set_name("Stale Target Reset Timeout", 384262288);
  aggressive_timeout->set_entity_category(::ENTITY_CATEGORY_CONFIG);
  aggressive_timeout->traits.set_min_value(1.0f);
  aggressive_timeout->traits.set_max_value(60.0f);
  aggressive_timeout->traits.set_step(1.0f);
  aggressive_timeout->traits.set_mode(number::NUMBER_MODE_AUTO);
  aggressive_timeout->traits.set_unit_of_measurement("s");
  aggressive_timeout->set_optimistic(true);
  aggressive_timeout->set_initial_value(3.0f);
  aggressive_timeout->set_restore_value(true);
  // sensor.bh1750:
  //   platform: bh1750
  //   name: Illuminance
  //   id: illuminance_sensor
  //   i2c_id: bus_a
  //   address: 0x23
  //   update_interval: 2s
  //   accuracy_decimals: 0
  //   filters:
  //     - lambda: !lambda |-
  //         return x + id(illuminance_offset_ui).state;
  //       type_id: sensor_lambdafilter_id
  //     - or:
  //         - delta: 5%
  //           type_id: sensor_deltafilter_id
  //         - delta: 5.0
  //           type_id: sensor_deltafilter_id_2
  //       type_id: sensor_orfilter_id
  //     - clamp:
  //         min_value: 0.0
  //         max_value: .nan
  //         ignore_out_of_range: false
  //       type_id: sensor_clampfilter_id
  //   disabled_by_default: false
  //   force_update: false
  //   unit_of_measurement: lx
  //   device_class: illuminance
  //   state_class: measurement
  illuminance_sensor = new bh1750::BH1750Sensor();
  App.register_sensor(illuminance_sensor);
  illuminance_sensor->set_name("Illuminance", 1797020032);
  illuminance_sensor->set_device_class("illuminance");
  illuminance_sensor->set_state_class(sensor::STATE_CLASS_MEASUREMENT);
  illuminance_sensor->set_unit_of_measurement("lx");
  illuminance_sensor->set_accuracy_decimals(0);
  sensor_lambdafilter_id = new sensor::StatelessLambdaFilter([](float x) -> esphome::optional<float> {
      #line 153 "common/everything-presence-lite-base.yaml"
      return x + illuminance_offset_ui->state;
  });
  sensor_deltafilter_id = new sensor::DeltaFilter(0.0f, 0.05f, std::numeric_limits<float>::infinity(), 0);
  sensor_deltafilter_id_2 = new sensor::DeltaFilter(5.0f, 0.0f, std::numeric_limits<float>::infinity(), 0);
  sensor_orfilter_id = new sensor::OrFilter({sensor_deltafilter_id, sensor_deltafilter_id_2});
  sensor_clampfilter_id = new sensor::ClampFilter(0.0f, NAN, false);
  illuminance_sensor->set_filters({sensor_lambdafilter_id, sensor_orfilter_id, sensor_clampfilter_id});
  illuminance_sensor->set_update_interval(2000);
  illuminance_sensor->set_component_source(LOG_STR("bh1750.sensor"));
  App.register_component(illuminance_sensor);
  illuminance_sensor->set_i2c_bus(bus_a);
  illuminance_sensor->set_i2c_address(0x23);
  // sensor.template:
  //   platform: template
  //   name: Assumed Present Remaining
  //   id: assumed_present_remaining_s
  //   unit_of_measurement: s
  //   accuracy_decimals: 0
  //   update_interval: 4294967295ms
  //   entity_category: diagnostic
  //   disabled_by_default: false
  //   force_update: false
  assumed_present_remaining_s = new template_::TemplateSensor();
  App.register_sensor(assumed_present_remaining_s);
  assumed_present_remaining_s->set_name("Assumed Present Remaining", 592148296);
  assumed_present_remaining_s->set_entity_category(::ENTITY_CATEGORY_DIAGNOSTIC);
  assumed_present_remaining_s->set_unit_of_measurement("s");
  assumed_present_remaining_s->set_accuracy_decimals(0);
  assumed_present_remaining_s->set_update_interval(4294967295UL);
  assumed_present_remaining_s->set_component_source(LOG_STR("template.sensor"));
  App.register_component(assumed_present_remaining_s);
  // sensor.template:
  //   platform: template
  //   name: Target 1 X
  //   id: target1_x
  //   accuracy_decimals: 0
  //   unit_of_measurement: mm
  //   state_class: measurement
  //   device_class: distance
  //   entity_category: diagnostic
  //   disabled_by_default: false
  //   force_update: false
  //   update_interval: 60s
  target1_x = new template_::TemplateSensor();
  App.register_sensor(target1_x);
  target1_x->set_name("Target 1 X", 562741759);
  target1_x->set_entity_category(::ENTITY_CATEGORY_DIAGNOSTIC);
  target1_x->set_device_class("distance");
  target1_x->set_state_class(sensor::STATE_CLASS_MEASUREMENT);
  target1_x->set_unit_of_measurement("mm");
  target1_x->set_accuracy_decimals(0);
  target1_x->set_update_interval(60000);
  target1_x->set_component_source(LOG_STR("template.sensor"));
  App.register_component(target1_x);
  // sensor.template:
  //   platform: template
  //   name: Target 1 Y
  //   id: target1_y
  //   accuracy_decimals: 0
  //   unit_of_measurement: mm
  //   state_class: measurement
  //   device_class: distance
  //   entity_category: diagnostic
  //   disabled_by_default: false
  //   force_update: false
  //   update_interval: 60s
  target1_y = new template_::TemplateSensor();
  App.register_sensor(target1_y);
  target1_y->set_name("Target 1 Y", 562741758);
  target1_y->set_entity_category(::ENTITY_CATEGORY_DIAGNOSTIC);
  target1_y->set_device_class("distance");
  target1_y->set_state_class(sensor::STATE_CLASS_MEASUREMENT);
  target1_y->set_unit_of_measurement("mm");
  target1_y->set_accuracy_decimals(0);
  target1_y->set_update_interval(60000);
  target1_y->set_component_source(LOG_STR("template.sensor"));
  App.register_component(target1_y);
  // sensor.template:
  //   platform: template
  //   name: Target 1 Speed
  //   id: target1_speed
  //   accuracy_decimals: 2
  //   unit_of_measurement: m/s
  //   state_class: measurement
  //   device_class: speed
  //   entity_category: diagnostic
  //   disabled_by_default: false
  //   force_update: false
  //   update_interval: 60s
  target1_speed = new template_::TemplateSensor();
  App.register_sensor(target1_speed);
  target1_speed->set_name("Target 1 Speed", 2413863814UL);
  target1_speed->set_entity_category(::ENTITY_CATEGORY_DIAGNOSTIC);
  target1_speed->set_device_class("speed");
  target1_speed->set_state_class(sensor::STATE_CLASS_MEASUREMENT);
  target1_speed->set_unit_of_measurement("m/s");
  target1_speed->set_accuracy_decimals(2);
  target1_speed->set_update_interval(60000);
  target1_speed->set_component_source(LOG_STR("template.sensor"));
  App.register_component(target1_speed);
  // sensor.template:
  //   platform: template
  //   name: Target 1 Resolution
  //   id: target1_resolution
  //   accuracy_decimals: 0
  //   unit_of_measurement: mm
  //   state_class: measurement
  //   device_class: distance
  //   entity_category: diagnostic
  //   disabled_by_default: false
  //   force_update: false
  //   update_interval: 60s
  target1_resolution = new template_::TemplateSensor();
  App.register_sensor(target1_resolution);
  target1_resolution->set_name("Target 1 Resolution", 1928514247);
  target1_resolution->set_entity_category(::ENTITY_CATEGORY_DIAGNOSTIC);
  target1_resolution->set_device_class("distance");
  target1_resolution->set_state_class(sensor::STATE_CLASS_MEASUREMENT);
  target1_resolution->set_unit_of_measurement("mm");
  target1_resolution->set_accuracy_decimals(0);
  target1_resolution->set_update_interval(60000);
  target1_resolution->set_component_source(LOG_STR("template.sensor"));
  App.register_component(target1_resolution);
  // sensor.template:
  //   platform: template
  //   name: Target 2 X
  //   id: target2_x
  //   accuracy_decimals: 0
  //   unit_of_measurement: mm
  //   state_class: measurement
  //   device_class: distance
  //   entity_category: diagnostic
  //   disabled_by_default: false
  //   force_update: false
  //   update_interval: 60s
  target2_x = new template_::TemplateSensor();
  App.register_sensor(target2_x);
  target2_x->set_name("Target 2 X", 3783794248UL);
  target2_x->set_entity_category(::ENTITY_CATEGORY_DIAGNOSTIC);
  target2_x->set_device_class("distance");
  target2_x->set_state_class(sensor::STATE_CLASS_MEASUREMENT);
  target2_x->set_unit_of_measurement("mm");
  target2_x->set_accuracy_decimals(0);
  target2_x->set_update_interval(60000);
  target2_x->set_component_source(LOG_STR("template.sensor"));
  App.register_component(target2_x);
  // sensor.template:
  //   platform: template
  //   name: Target 2 Y
  //   id: target2_y
  //   accuracy_decimals: 0
  //   unit_of_measurement: mm
  //   state_class: measurement
  //   device_class: distance
  //   entity_category: diagnostic
  //   disabled_by_default: false
  //   force_update: false
  //   update_interval: 60s
  target2_y = new template_::TemplateSensor();
  App.register_sensor(target2_y);
  target2_y->set_name("Target 2 Y", 3783794249UL);
  target2_y->set_entity_category(::ENTITY_CATEGORY_DIAGNOSTIC);
  target2_y->set_device_class("distance");
  target2_y->set_state_class(sensor::STATE_CLASS_MEASUREMENT);
  target2_y->set_unit_of_measurement("mm");
  target2_y->set_accuracy_decimals(0);
  target2_y->set_update_interval(60000);
  target2_y->set_component_source(LOG_STR("template.sensor"));
  App.register_component(target2_y);
  // sensor.template:
  //   platform: template
  //   name: Target 2 Speed
  //   id: target2_speed
  //   accuracy_decimals: 2
  //   unit_of_measurement: m/s
  //   state_class: measurement
  //   device_class: speed
  //   entity_category: diagnostic
  //   disabled_by_default: false
  //   force_update: false
  //   update_interval: 60s
  target2_speed = new template_::TemplateSensor();
  App.register_sensor(target2_speed);
  target2_speed->set_name("Target 2 Speed", 795385881);
  target2_speed->set_entity_category(::ENTITY_CATEGORY_DIAGNOSTIC);
  target2_speed->set_device_class("speed");
  target2_speed->set_state_class(sensor::STATE_CLASS_MEASUREMENT);
  target2_speed->set_unit_of_measurement("m/s");
  target2_speed->set_accuracy_decimals(2);
  target2_speed->set_update_interval(60000);
  target2_speed->set_component_source(LOG_STR("template.sensor"));
  App.register_component(target2_speed);
  // sensor.template:
  //   platform: template
  //   name: Target 2 Resolution
  //   id: target2_resolution
  //   accuracy_decimals: 0
  //   unit_of_measurement: mm
  //   state_class: measurement
  //   device_class: distance
  //   entity_category: diagnostic
  //   disabled_by_default: false
  //   force_update: false
  //   update_interval: 60s
  target2_resolution = new template_::TemplateSensor();
  App.register_sensor(target2_resolution);
  target2_resolution->set_name("Target 2 Resolution", 2387360390UL);
  target2_resolution->set_entity_category(::ENTITY_CATEGORY_DIAGNOSTIC);
  target2_resolution->set_device_class("distance");
  target2_resolution->set_state_class(sensor::STATE_CLASS_MEASUREMENT);
  target2_resolution->set_unit_of_measurement("mm");
  target2_resolution->set_accuracy_decimals(0);
  target2_resolution->set_update_interval(60000);
  target2_resolution->set_component_source(LOG_STR("template.sensor"));
  App.register_component(target2_resolution);
  // sensor.template:
  //   platform: template
  //   name: Target 3 X
  //   id: target3_x
  //   accuracy_decimals: 0
  //   unit_of_measurement: mm
  //   state_class: measurement
  //   device_class: distance
  //   entity_category: diagnostic
  //   disabled_by_default: false
  //   force_update: false
  //   update_interval: 60s
  target3_x = new template_::TemplateSensor();
  App.register_sensor(target3_x);
  target3_x->set_name("Target 3 X", 562447393);
  target3_x->set_entity_category(::ENTITY_CATEGORY_DIAGNOSTIC);
  target3_x->set_device_class("distance");
  target3_x->set_state_class(sensor::STATE_CLASS_MEASUREMENT);
  target3_x->set_unit_of_measurement("mm");
  target3_x->set_accuracy_decimals(0);
  target3_x->set_update_interval(60000);
  target3_x->set_component_source(LOG_STR("template.sensor"));
  App.register_component(target3_x);
  // sensor.template:
  //   platform: template
  //   name: Target 3 Y
  //   id: target3_y
  //   accuracy_decimals: 0
  //   unit_of_measurement: mm
  //   state_class: measurement
  //   device_class: distance
  //   entity_category: diagnostic
  //   disabled_by_default: false
  //   force_update: false
  //   update_interval: 60s
  target3_y = new template_::TemplateSensor();
  App.register_sensor(target3_y);
  target3_y->set_name("Target 3 Y", 562447392);
  target3_y->set_entity_category(::ENTITY_CATEGORY_DIAGNOSTIC);
  target3_y->set_device_class("distance");
  target3_y->set_state_class(sensor::STATE_CLASS_MEASUREMENT);
  target3_y->set_unit_of_measurement("mm");
  target3_y->set_accuracy_decimals(0);
  target3_y->set_update_interval(60000);
  target3_y->set_component_source(LOG_STR("template.sensor"));
  App.register_component(target3_y);
  // sensor.template:
  //   platform: template
  //   name: Target 3 Speed
  //   id: target3_speed
  //   accuracy_decimals: 2
  //   unit_of_measurement: m/s
  //   state_class: measurement
  //   device_class: speed
  //   entity_category: diagnostic
  //   disabled_by_default: false
  //   force_update: false
  //   update_interval: 60s
  target3_speed = new template_::TemplateSensor();
  App.register_sensor(target3_speed);
  target3_speed->set_name("Target 3 Speed", 492591948);
  target3_speed->set_entity_category(::ENTITY_CATEGORY_DIAGNOSTIC);
  target3_speed->set_device_class("speed");
  target3_speed->set_state_class(sensor::STATE_CLASS_MEASUREMENT);
  target3_speed->set_unit_of_measurement("m/s");
  target3_speed->set_accuracy_decimals(2);
  target3_speed->set_update_interval(60000);
  target3_speed->set_component_source(LOG_STR("template.sensor"));
  App.register_component(target3_speed);
  // sensor.template:
  //   platform: template
  //   name: Target 3 Resolution
  //   id: target3_resolution
  //   accuracy_decimals: 0
  //   unit_of_measurement: mm
  //   state_class: measurement
  //   device_class: distance
  //   entity_category: diagnostic
  //   disabled_by_default: false
  //   force_update: false
  //   update_interval: 60s
  target3_resolution = new template_::TemplateSensor();
  App.register_sensor(target3_resolution);
  target3_resolution->set_name("Target 3 Resolution", 2841133385UL);
  target3_resolution->set_entity_category(::ENTITY_CATEGORY_DIAGNOSTIC);
  target3_resolution->set_device_class("distance");
  target3_resolution->set_state_class(sensor::STATE_CLASS_MEASUREMENT);
  target3_resolution->set_unit_of_measurement("mm");
  target3_resolution->set_accuracy_decimals(0);
  target3_resolution->set_update_interval(60000);
  target3_resolution->set_component_source(LOG_STR("template.sensor"));
  App.register_component(target3_resolution);
  // sensor.template:
  //   platform: template
  //   name: Target 1 Angle
  //   id: target1_angle
  //   accuracy_decimals: 0
  //   unit_of_measurement: °
  //   state_class: measurement
  //   entity_category: diagnostic
  //   disabled_by_default: false
  //   force_update: false
  //   update_interval: 60s
  target1_angle = new template_::TemplateSensor();
  App.register_sensor(target1_angle);
  target1_angle->set_name("Target 1 Angle", 1430894202);
  target1_angle->set_entity_category(::ENTITY_CATEGORY_DIAGNOSTIC);
  target1_angle->set_state_class(sensor::STATE_CLASS_MEASUREMENT);
  target1_angle->set_unit_of_measurement("\302\260");
  target1_angle->set_accuracy_decimals(0);
  target1_angle->set_update_interval(60000);
  target1_angle->set_component_source(LOG_STR("template.sensor"));
  App.register_component(target1_angle);
  // sensor.template:
  //   platform: template
  //   name: Target 2 Angle
  //   id: target2_angle
  //   accuracy_decimals: 0
  //   unit_of_measurement: °
  //   state_class: measurement
  //   entity_category: diagnostic
  //   disabled_by_default: false
  //   force_update: false
  //   update_interval: 60s
  target2_angle = new template_::TemplateSensor();
  App.register_sensor(target2_angle);
  target2_angle->set_name("Target 2 Angle", 768515601);
  target2_angle->set_entity_category(::ENTITY_CATEGORY_DIAGNOSTIC);
  target2_angle->set_state_class(sensor::STATE_CLASS_MEASUREMENT);
  target2_angle->set_unit_of_measurement("\302\260");
  target2_angle->set_accuracy_decimals(0);
  target2_angle->set_update_interval(60000);
  target2_angle->set_component_source(LOG_STR("template.sensor"));
  App.register_component(target2_angle);
  // sensor.template:
  //   platform: template
  //   name: Target 3 Angle
  //   id: target3_angle
  //   accuracy_decimals: 0
  //   unit_of_measurement: °
  //   state_class: measurement
  //   entity_category: diagnostic
  //   disabled_by_default: false
  //   force_update: false
  //   update_interval: 60s
  target3_angle = new template_::TemplateSensor();
  App.register_sensor(target3_angle);
  target3_angle->set_name("Target 3 Angle", 3820210684UL);
  target3_angle->set_entity_category(::ENTITY_CATEGORY_DIAGNOSTIC);
  target3_angle->set_state_class(sensor::STATE_CLASS_MEASUREMENT);
  target3_angle->set_unit_of_measurement("\302\260");
  target3_angle->set_accuracy_decimals(0);
  target3_angle->set_update_interval(60000);
  target3_angle->set_component_source(LOG_STR("template.sensor"));
  App.register_component(target3_angle);
  // sensor.template:
  //   platform: template
  //   name: Target 1 Distance
  //   id: target1_distance
  //   accuracy_decimals: 0
  //   unit_of_measurement: mm
  //   state_class: measurement
  //   device_class: distance
  //   entity_category: diagnostic
  //   disabled_by_default: false
  //   force_update: false
  //   update_interval: 60s
  target1_distance = new template_::TemplateSensor();
  App.register_sensor(target1_distance);
  target1_distance->set_name("Target 1 Distance", 4164915904UL);
  target1_distance->set_entity_category(::ENTITY_CATEGORY_DIAGNOSTIC);
  target1_distance->set_device_class("distance");
  target1_distance->set_state_class(sensor::STATE_CLASS_MEASUREMENT);
  target1_distance->set_unit_of_measurement("mm");
  target1_distance->set_accuracy_decimals(0);
  target1_distance->set_update_interval(60000);
  target1_distance->set_component_source(LOG_STR("template.sensor"));
  App.register_component(target1_distance);
  // sensor.template:
  //   platform: template
  //   name: Target 2 Distance
  //   id: target2_distance
  //   accuracy_decimals: 0
  //   unit_of_measurement: mm
  //   state_class: measurement
  //   device_class: distance
  //   entity_category: diagnostic
  //   disabled_by_default: false
  //   force_update: false
  //   update_interval: 60s
  target2_distance = new template_::TemplateSensor();
  App.register_sensor(target2_distance);
  target2_distance->set_name("Target 2 Distance", 3992954153UL);
  target2_distance->set_entity_category(::ENTITY_CATEGORY_DIAGNOSTIC);
  target2_distance->set_device_class("distance");
  target2_distance->set_state_class(sensor::STATE_CLASS_MEASUREMENT);
  target2_distance->set_unit_of_measurement("mm");
  target2_distance->set_accuracy_decimals(0);
  target2_distance->set_update_interval(60000);
  target2_distance->set_component_source(LOG_STR("template.sensor"));
  App.register_component(target2_distance);
  // sensor.template:
  //   platform: template
  //   name: Target 3 Distance
  //   id: target3_distance
  //   accuracy_decimals: 0
  //   unit_of_measurement: mm
  //   state_class: measurement
  //   device_class: distance
  //   entity_category: diagnostic
  //   disabled_by_default: false
  //   force_update: false
  //   update_interval: 60s
  target3_distance = new template_::TemplateSensor();
  App.register_sensor(target3_distance);
  target3_distance->set_name("Target 3 Distance", 2582416050UL);
  target3_distance->set_entity_category(::ENTITY_CATEGORY_DIAGNOSTIC);
  target3_distance->set_device_class("distance");
  target3_distance->set_state_class(sensor::STATE_CLASS_MEASUREMENT);
  target3_distance->set_unit_of_measurement("mm");
  target3_distance->set_accuracy_decimals(0);
  target3_distance->set_update_interval(60000);
  target3_distance->set_component_source(LOG_STR("template.sensor"));
  App.register_component(target3_distance);
  // sensor.template:
  //   platform: template
  //   name: Zone 1 Target Count
  //   id: zone1_target_count
  //   accuracy_decimals: 0
  //   unit_of_measurement: ' '
  //   entity_category: diagnostic
  //   disabled_by_default: false
  //   force_update: false
  //   update_interval: 60s
  zone1_target_count = new template_::TemplateSensor();
  App.register_sensor(zone1_target_count);
  zone1_target_count->set_name("Zone 1 Target Count", 1407784021);
  zone1_target_count->set_entity_category(::ENTITY_CATEGORY_DIAGNOSTIC);
  zone1_target_count->set_unit_of_measurement(" ");
  zone1_target_count->set_accuracy_decimals(0);
  zone1_target_count->set_update_interval(60000);
  zone1_target_count->set_component_source(LOG_STR("template.sensor"));
  App.register_component(zone1_target_count);
  // sensor.template:
  //   platform: template
  //   name: Zone 2 Target Count
  //   id: zone2_target_count
  //   accuracy_decimals: 0
  //   disabled_by_default: true
  //   unit_of_measurement: ' '
  //   entity_category: diagnostic
  //   force_update: false
  //   update_interval: 60s
  zone2_target_count = new template_::TemplateSensor();
  App.register_sensor(zone2_target_count);
  zone2_target_count->set_name("Zone 2 Target Count", 3529837984UL);
  zone2_target_count->set_disabled_by_default(true);
  zone2_target_count->set_entity_category(::ENTITY_CATEGORY_DIAGNOSTIC);
  zone2_target_count->set_unit_of_measurement(" ");
  zone2_target_count->set_accuracy_decimals(0);
  zone2_target_count->set_update_interval(60000);
  zone2_target_count->set_component_source(LOG_STR("template.sensor"));
  App.register_component(zone2_target_count);
  // sensor.template:
  //   platform: template
  //   name: Zone 3 Target Count
  //   id: zone3_target_count
  //   accuracy_decimals: 0
  //   disabled_by_default: true
  //   unit_of_measurement: ' '
  //   entity_category: diagnostic
  //   force_update: false
  //   update_interval: 60s
  zone3_target_count = new template_::TemplateSensor();
  App.register_sensor(zone3_target_count);
  zone3_target_count->set_name("Zone 3 Target Count", 3565806099UL);
  zone3_target_count->set_disabled_by_default(true);
  zone3_target_count->set_entity_category(::ENTITY_CATEGORY_DIAGNOSTIC);
  zone3_target_count->set_unit_of_measurement(" ");
  zone3_target_count->set_accuracy_decimals(0);
  zone3_target_count->set_update_interval(60000);
  zone3_target_count->set_component_source(LOG_STR("template.sensor"));
  App.register_component(zone3_target_count);
  // sensor.template:
  //   platform: template
  //   name: Zone 4 Target Count
  //   id: zone4_target_count
  //   accuracy_decimals: 0
  //   disabled_by_default: true
  //   unit_of_measurement: ' '
  //   entity_category: diagnostic
  //   force_update: false
  //   update_interval: 60s
  zone4_target_count = new template_::TemplateSensor();
  App.register_sensor(zone4_target_count);
  zone4_target_count->set_name("Zone 4 Target Count", 3352935366UL);
  zone4_target_count->set_disabled_by_default(true);
  zone4_target_count->set_entity_category(::ENTITY_CATEGORY_DIAGNOSTIC);
  zone4_target_count->set_unit_of_measurement(" ");
  zone4_target_count->set_accuracy_decimals(0);
  zone4_target_count->set_update_interval(60000);
  zone4_target_count->set_component_source(LOG_STR("template.sensor"));
  App.register_component(zone4_target_count);
  // sensor.template:
  //   platform: template
  //   name: Occupancy Mask 1 Target Count
  //   id: occupancy_mask_1_target_count
  //   accuracy_decimals: 0
  //   disabled_by_default: true
  //   unit_of_measurement: ' '
  //   entity_category: diagnostic
  //   force_update: false
  //   update_interval: 60s
  occupancy_mask_1_target_count = new template_::TemplateSensor();
  App.register_sensor(occupancy_mask_1_target_count);
  occupancy_mask_1_target_count->set_name("Occupancy Mask 1 Target Count", 1935414569);
  occupancy_mask_1_target_count->set_disabled_by_default(true);
  occupancy_mask_1_target_count->set_entity_category(::ENTITY_CATEGORY_DIAGNOSTIC);
  occupancy_mask_1_target_count->set_unit_of_measurement(" ");
  occupancy_mask_1_target_count->set_accuracy_decimals(0);
  occupancy_mask_1_target_count->set_update_interval(60000);
  occupancy_mask_1_target_count->set_component_source(LOG_STR("template.sensor"));
  App.register_component(occupancy_mask_1_target_count);
  // sensor.template:
  //   platform: template
  //   name: Occupancy Mask 2 Target Count
  //   id: occupancy_mask_2_target_count
  //   accuracy_decimals: 0
  //   disabled_by_default: true
  //   unit_of_measurement: ' '
  //   entity_category: diagnostic
  //   force_update: false
  //   update_interval: 60s
  occupancy_mask_2_target_count = new template_::TemplateSensor();
  App.register_sensor(occupancy_mask_2_target_count);
  occupancy_mask_2_target_count->set_name("Occupancy Mask 2 Target Count", 3417786596UL);
  occupancy_mask_2_target_count->set_disabled_by_default(true);
  occupancy_mask_2_target_count->set_entity_category(::ENTITY_CATEGORY_DIAGNOSTIC);
  occupancy_mask_2_target_count->set_unit_of_measurement(" ");
  occupancy_mask_2_target_count->set_accuracy_decimals(0);
  occupancy_mask_2_target_count->set_update_interval(60000);
  occupancy_mask_2_target_count->set_component_source(LOG_STR("template.sensor"));
  App.register_component(occupancy_mask_2_target_count);
  // binary_sensor.gpio:
  //   platform: gpio
  //   pin:
  //     number: 9
  //     inverted: true
  //     mode:
  //       input: true
  //       output: false
  //       open_drain: false
  //       pullup: false
  //       pulldown: false
  //     id: esp32_esp32internalgpiopin_id_3
  //     ignore_pin_validation_error: false
  //     ignore_strapping_warning: false
  //     drive_strength: 20.0
  //   id: flash_button
  //   internal: true
  //   filters:
  //     - delayed_on: 50ms
  //       type_id: binary_sensor_delayedonfilter_id
  //   on_multi_click:
  //     - timing:
  //         - state: true
  //           min_length: 200ms
  //           max_length: 3s
  //         - state: false
  //           min_length: 100ms
  //           max_length: 2s
  //         - state: true
  //           min_length: 200ms
  //           max_length: 3s
  //         - state: false
  //           min_length: 100ms
  //           max_length: 2s
  //         - state: true
  //           min_length: 5s
  //       then:
  //         - repeat:
  //             count: 5
  //             then:
  //               - light.turn_on:
  //                   id: esp32_led
  //                   state: true
  //                 type_id: light_lightcontrolaction_id
  //               - delay: 150ms
  //                 type_id: delayaction_id_2
  //               - light.turn_off:
  //                   id: esp32_led
  //                   state: false
  //                 type_id: light_lightcontrolaction_id_2
  //               - delay: 150ms
  //                 type_id: delayaction_id_3
  //           type_id: repeataction_id
  //         - light.turn_on:
  //             id: esp32_led
  //             state: true
  //           type_id: light_lightcontrolaction_id_3
  //         - button.press:
  //             id: factory_reset_button
  //           type_id: button_pressaction_id_2
  //       automation_id: automation_id_5
  //       trigger_id: binary_sensor_multiclicktrigger_id
  //       invalid_cooldown: 1s
  //   disabled_by_default: false
  //   use_interrupt: true
  //   interrupt_type: ANY
  //   name: flash_button
  flash_button = new gpio::GPIOBinarySensor();
  App.register_binary_sensor(flash_button);
  flash_button->set_name("flash_button", 1849823692);
  flash_button->set_internal(true);
  flash_button->set_trigger_on_initial_state(false);
  binary_sensor_delayedonfilter_id = new binary_sensor::DelayedOnFilter();
  binary_sensor_delayedonfilter_id->set_component_source(LOG_STR("binary_sensor"));
  App.register_component(binary_sensor_delayedonfilter_id);
  binary_sensor_delayedonfilter_id->set_delay(50);
  flash_button->add_filters({binary_sensor_delayedonfilter_id});
  flash_button->set_component_source(LOG_STR("gpio.binary_sensor"));
  App.register_component(flash_button);
  esp32_esp32internalgpiopin_id_3 = new esp32::ESP32InternalGPIOPin();
  esp32_esp32internalgpiopin_id_3->set_pin(::GPIO_NUM_9);
  esp32_esp32internalgpiopin_id_3->set_inverted(true);
  esp32_esp32internalgpiopin_id_3->set_drive_strength(::GPIO_DRIVE_CAP_2);
  esp32_esp32internalgpiopin_id_3->set_flags(gpio::Flags::FLAG_INPUT);
  flash_button->set_pin(esp32_esp32internalgpiopin_id_3);
  flash_button->set_interrupt_type(gpio::INTERRUPT_ANY_EDGE);
  binary_sensor_multiclicktrigger_id = new binary_sensor::MultiClickTrigger(flash_button, {binary_sensor::MultiClickTriggerEvent{
      .state = true,
      .min_length = 200,
      .max_length = 3000,
    }, binary_sensor::MultiClickTriggerEvent{
      .state = false,
      .min_length = 100,
      .max_length = 2000,
    }, binary_sensor::MultiClickTriggerEvent{
      .state = true,
      .min_length = 200,
      .max_length = 3000,
    }, binary_sensor::MultiClickTriggerEvent{
      .state = false,
      .min_length = 100,
      .max_length = 2000,
    }, binary_sensor::MultiClickTriggerEvent{
      .state = true,
      .min_length = 5000,
      .max_length = 4294967294UL,
  }});
  binary_sensor_multiclicktrigger_id->set_invalid_cooldown(1000);
  binary_sensor_multiclicktrigger_id->set_component_source(LOG_STR("binary_sensor"));
  App.register_component(binary_sensor_multiclicktrigger_id);
  automation_id_5 = new Automation<>(binary_sensor_multiclicktrigger_id);
  repeataction_id = new RepeatAction<>();
  repeataction_id->set_count(5);
  light_lightcontrolaction_id = new light::LightControlAction<uint32_t>(esp32_led);
  light_lightcontrolaction_id->set_state(true);
  delayaction_id_2 = new DelayAction<uint32_t>();
  delayaction_id_2->set_component_source(LOG_STR("binary_sensor"));
  App.register_component(delayaction_id_2);
  delayaction_id_2->set_delay(150);
  light_lightcontrolaction_id_2 = new light::LightControlAction<uint32_t>(esp32_led);
  light_lightcontrolaction_id_2->set_state(false);
  delayaction_id_3 = new DelayAction<uint32_t>();
  delayaction_id_3->set_component_source(LOG_STR("binary_sensor"));
  App.register_component(delayaction_id_3);
  delayaction_id_3->set_delay(150);
  repeataction_id->add_then({light_lightcontrolaction_id, delayaction_id_2, light_lightcontrolaction_id_2, delayaction_id_3});
  light_lightcontrolaction_id_3 = new light::LightControlAction<>(esp32_led);
  light_lightcontrolaction_id_3->set_state(true);
  // binary_sensor.template:
  //   platform: template
  //   name: Occupancy
  //   device_class: occupancy
  //   id: occupancy
  //   filters:
  //     - delayed_off: !lambda |-
  //         return (id(off_delay).state * 1000);
  //       type_id: binary_sensor_delayedofffilter_id
  //   disabled_by_default: false
  occupancy = new template_::TemplateBinarySensor();
  App.register_binary_sensor(occupancy);
  occupancy->set_name("Occupancy", 1263039176);
  occupancy->set_device_class("occupancy");
  occupancy->set_trigger_on_initial_state(false);
  binary_sensor_delayedofffilter_id = new binary_sensor::DelayedOffFilter();
  binary_sensor_delayedofffilter_id->set_component_source(LOG_STR("binary_sensor"));
  App.register_component(binary_sensor_delayedofffilter_id);
  binary_sensor_delayedofffilter_id->set_delay([]() -> uint32_t {
      #line 234 "common/ld2450-base.yaml"
      return (off_delay->state * 1000);
  });
  occupancy->add_filters({binary_sensor_delayedofffilter_id});
  occupancy->set_component_source(LOG_STR("template.binary_sensor"));
  App.register_component(occupancy);
  // binary_sensor.template:
  //   platform: template
  //   name: Zone 1 Occupancy
  //   device_class: occupancy
  //   id: zone1_occupancy
  //   filters:
  //     - delayed_off: !lambda |-
  //         return (id(zone_1_off_delay).state * 1000);
  //       type_id: binary_sensor_delayedofffilter_id_2
  //   disabled_by_default: false
  zone1_occupancy = new template_::TemplateBinarySensor();
  App.register_binary_sensor(zone1_occupancy);
  zone1_occupancy->set_name("Zone 1 Occupancy", 2609283921UL);
  zone1_occupancy->set_device_class("occupancy");
  zone1_occupancy->set_trigger_on_initial_state(false);
  binary_sensor_delayedofffilter_id_2 = new binary_sensor::DelayedOffFilter();
  binary_sensor_delayedofffilter_id_2->set_component_source(LOG_STR("binary_sensor"));
  App.register_component(binary_sensor_delayedofffilter_id_2);
  binary_sensor_delayedofffilter_id_2->set_delay([]() -> uint32_t {
      #line 241 "common/ld2450-base.yaml"
      return (zone_1_off_delay->state * 1000);
  });
  zone1_occupancy->add_filters({binary_sensor_delayedofffilter_id_2});
  zone1_occupancy->set_component_source(LOG_STR("template.binary_sensor"));
  App.register_component(zone1_occupancy);
  // binary_sensor.template:
  //   platform: template
  //   name: Zone 2 Occupancy
  //   device_class: occupancy
  //   id: zone2_occupancy
  //   filters:
  //     - delayed_off: !lambda |-
  //         return (id(zone_2_off_delay).state * 1000);
  //       type_id: binary_sensor_delayedofffilter_id_3
  //   disabled_by_default: true
  zone2_occupancy = new template_::TemplateBinarySensor();
  App.register_binary_sensor(zone2_occupancy);
  zone2_occupancy->set_name("Zone 2 Occupancy", 2533351870UL);
  zone2_occupancy->set_disabled_by_default(true);
  zone2_occupancy->set_device_class("occupancy");
  zone2_occupancy->set_trigger_on_initial_state(false);
  binary_sensor_delayedofffilter_id_3 = new binary_sensor::DelayedOffFilter();
  binary_sensor_delayedofffilter_id_3->set_component_source(LOG_STR("binary_sensor"));
  App.register_component(binary_sensor_delayedofffilter_id_3);
  binary_sensor_delayedofffilter_id_3->set_delay([]() -> uint32_t {
      #line 247 "common/ld2450-base.yaml"
      return (zone_2_off_delay->state * 1000);
  });
  zone2_occupancy->add_filters({binary_sensor_delayedofffilter_id_3});
  zone2_occupancy->set_component_source(LOG_STR("template.binary_sensor"));
  App.register_component(zone2_occupancy);
  // binary_sensor.template:
  //   platform: template
  //   name: Zone 3 Occupancy
  //   device_class: occupancy
  //   id: zone3_occupancy
  //   filters:
  //     - delayed_off: !lambda |-
  //         return (id(zone_3_off_delay).state * 1000);
  //       type_id: binary_sensor_delayedofffilter_id_4
  //   disabled_by_default: true
  zone3_occupancy = new template_::TemplateBinarySensor();
  App.register_binary_sensor(zone3_occupancy);
  zone3_occupancy->set_name("Zone 3 Occupancy", 3748869447UL);
  zone3_occupancy->set_disabled_by_default(true);
  zone3_occupancy->set_device_class("occupancy");
  zone3_occupancy->set_trigger_on_initial_state(false);
  binary_sensor_delayedofffilter_id_4 = new binary_sensor::DelayedOffFilter();
  binary_sensor_delayedofffilter_id_4->set_component_source(LOG_STR("binary_sensor"));
  App.register_component(binary_sensor_delayedofffilter_id_4);
  binary_sensor_delayedofffilter_id_4->set_delay([]() -> uint32_t {
      #line 254 "common/ld2450-base.yaml"
      return (zone_3_off_delay->state * 1000);
  });
  zone3_occupancy->add_filters({binary_sensor_delayedofffilter_id_4});
  zone3_occupancy->set_component_source(LOG_STR("template.binary_sensor"));
  App.register_component(zone3_occupancy);
  // binary_sensor.template:
  //   platform: template
  //   name: Zone 4 Occupancy
  //   device_class: occupancy
  //   id: zone4_occupancy
  //   filters:
  //     - delayed_off: !lambda |-
  //         return (id(zone_4_off_delay).state * 1000);
  //       type_id: binary_sensor_delayedofffilter_id_5
  //   disabled_by_default: true
  zone4_occupancy = new template_::TemplateBinarySensor();
  App.register_binary_sensor(zone4_occupancy);
  zone4_occupancy->set_name("Zone 4 Occupancy", 979325612);
  zone4_occupancy->set_disabled_by_default(true);
  zone4_occupancy->set_device_class("occupancy");
  zone4_occupancy->set_trigger_on_initial_state(false);
  binary_sensor_delayedofffilter_id_5 = new binary_sensor::DelayedOffFilter();
  binary_sensor_delayedofffilter_id_5->set_component_source(LOG_STR("binary_sensor"));
  App.register_component(binary_sensor_delayedofffilter_id_5);
  binary_sensor_delayedofffilter_id_5->set_delay([]() -> uint32_t {
      #line 261 "common/ld2450-base.yaml"
      return (zone_4_off_delay->state * 1000);
  });
  zone4_occupancy->add_filters({binary_sensor_delayedofffilter_id_5});
  zone4_occupancy->set_component_source(LOG_STR("template.binary_sensor"));
  App.register_component(zone4_occupancy);
  // binary_sensor.template:
  //   platform: template
  //   name: Target 1 Active
  //   id: target1_active
  //   entity_category: diagnostic
  //   disabled_by_default: false
  target1_active = new template_::TemplateBinarySensor();
  App.register_binary_sensor(target1_active);
  target1_active->set_name("Target 1 Active", 366018787);
  target1_active->set_entity_category(::ENTITY_CATEGORY_DIAGNOSTIC);
  target1_active->set_trigger_on_initial_state(false);
  target1_active->set_component_source(LOG_STR("template.binary_sensor"));
  App.register_component(target1_active);
  // binary_sensor.template:
  //   platform: template
  //   name: Target 2 Active
  //   id: target2_active
  //   entity_category: diagnostic
  //   disabled_by_default: false
  target2_active = new template_::TemplateBinarySensor();
  App.register_binary_sensor(target2_active);
  target2_active->set_name("Target 2 Active", 4280005854UL);
  target2_active->set_entity_category(::ENTITY_CATEGORY_DIAGNOSTIC);
  target2_active->set_trigger_on_initial_state(false);
  target2_active->set_component_source(LOG_STR("template.binary_sensor"));
  App.register_component(target2_active);
  // binary_sensor.template:
  //   platform: template
  //   name: Target 3 Active
  //   id: target3_active
  //   entity_category: diagnostic
  //   disabled_by_default: false
  target3_active = new template_::TemplateBinarySensor();
  App.register_binary_sensor(target3_active);
  target3_active->set_name("Target 3 Active", 3413445721UL);
  target3_active->set_entity_category(::ENTITY_CATEGORY_DIAGNOSTIC);
  target3_active->set_trigger_on_initial_state(false);
  target3_active->set_component_source(LOG_STR("template.binary_sensor"));
  App.register_component(target3_active);
  // binary_sensor.template:
  //   platform: template
  //   name: Assumed Present
  //   id: assumed_present
  //   entity_category: diagnostic
  //   disabled_by_default: false
  assumed_present = new template_::TemplateBinarySensor();
  App.register_binary_sensor(assumed_present);
  assumed_present->set_name("Assumed Present", 2551498953UL);
  assumed_present->set_entity_category(::ENTITY_CATEGORY_DIAGNOSTIC);
  assumed_present->set_trigger_on_initial_state(false);
  assumed_present->set_component_source(LOG_STR("template.binary_sensor"));
  App.register_component(assumed_present);
  // button.restart:
  //   platform: restart
  //   icon: mdi:power-cycle
  //   name: ESP Reboot
  //   entity_category: config
  //   disabled_by_default: false
  //   id: restart_restartbutton_id
  //   device_class: restart
  restart_restartbutton_id = new restart::RestartButton();
  restart_restartbutton_id->set_component_source(LOG_STR("restart.button"));
  App.register_component(restart_restartbutton_id);
  App.register_button(restart_restartbutton_id);
  restart_restartbutton_id->set_name("ESP Reboot", 3894040613UL);
  restart_restartbutton_id->set_icon("mdi:power-cycle");
  restart_restartbutton_id->set_entity_category(::ENTITY_CATEGORY_CONFIG);
  restart_restartbutton_id->set_device_class("restart");
  // button.template:
  //   platform: template
  //   name: Apply Update
  //   entity_category: diagnostic
  //   on_press:
  //     - then:
  //         - logger.log:
  //             format: Applying firmware update based on selected configuration
  //             level: DEBUG
  //             logger_id: logger_logger_id
  //             tag: main
  //             args: []
  //           type_id: lambdaaction_id_4
  //         - lambda: !lambda |-
  //             std::string base_url = "https:everythingsmarthome.github.io/everything-presence-lite/everything-presence-lite-ha";
  //             std::string variant = "ld2450";
  //             if (variant == "ld2450") {
  //               variant.clear();
  //             }
  //   
  //             if (!variant.empty()) {
  //               base_url += "-";
  //               base_url += variant;
  //             }
  //   
  //             if (id(firmware_ble).state == "Disabled") {
  //               base_url += "-no-ble";
  //             }
  //   
  //             if (id(firmware_co2).state == "Enabled") {
  //               base_url += "-co2";
  //             }
  //   
  //             base_url += "-manifest.json";
  //   
  //             ESP_LOGI("firmware", "Switching to manifest: %s", base_url.c_str());
  //             id(update_http_request).set_source_url(base_url.c_str());
  //           type_id: lambdaaction_id_5
  //         - component.update:
  //             id: update_http_request
  //           type_id: updatecomponentaction_id_2
  //         - delay: 2s
  //           type_id: delayaction_id_4
  //         - update.perform:
  //             id: update_http_request
  //             force_update: true
  //           type_id: update_performaction_id_2
  //       automation_id: automation_id_6
  //       trigger_id: button_buttonpresstrigger_id
  //   disabled_by_default: false
  //   id: template__templatebutton_id
  template__templatebutton_id = new template_::TemplateButton();
  App.register_button(template__templatebutton_id);
  template__templatebutton_id->set_name("Apply Update", 972190673);
  template__templatebutton_id->set_entity_category(::ENTITY_CATEGORY_DIAGNOSTIC);
  button_buttonpresstrigger_id = new button::ButtonPressTrigger(template__templatebutton_id);
  automation_id_6 = new Automation<>(button_buttonpresstrigger_id);
  lambdaaction_id_4 = new StatelessLambdaAction<>([]() -> void {
      ESP_LOGD("main", "Applying firmware update based on selected configuration");
  });
  // button.factory_reset:
  //   platform: factory_reset
  //   id: factory_reset_button
  //   internal: true
  //   disabled_by_default: false
  //   icon: mdi:restart-alert
  //   entity_category: config
  //   device_class: restart
  //   name: factory_reset_button
  factory_reset_button = new factory_reset::FactoryResetButton();
  factory_reset_button->set_component_source(LOG_STR("factory_reset.button"));
  App.register_component(factory_reset_button);
  App.register_button(factory_reset_button);
  factory_reset_button->set_name("factory_reset_button", 43601032);
  factory_reset_button->set_internal(true);
  factory_reset_button->set_icon("mdi:restart-alert");
  factory_reset_button->set_entity_category(::ENTITY_CATEGORY_CONFIG);
  factory_reset_button->set_device_class("restart");
  // button.template:
  //   platform: template
  //   id: get_mmwave_firmware
  //   internal: true
  //   entity_category: config
  //   disabled_by_default: true
  //   on_press:
  //     - then:
  //         - switch.turn_on:
  //             id: mmwave_configuration
  //           type_id: switch__turnonaction_id
  //         - delay: 1s
  //           type_id: delayaction_id_5
  //         - uart.write:
  //             id: uart_bus
  //             data:
  //               - 0xFD
  //               - 0xFC
  //               - 0xFB
  //               - 0xFA
  //               - 0x02
  //               - 0x00
  //               - 0xA0
  //               - 0x00
  //               - 0x04
  //               - 0x03
  //               - 0x02
  //               - 0x01
  //           type_id: uart_uartwriteaction_id
  //         - lambda: !lambda |-
  //             uint8_t response[20];
  //             if (id(uart_bus).read_array(response, 20)) {
  //               int firmware_major = response[13];
  //               int firmware_minor = response[12];
  //               char firmware_version_str[32];
  //               sprintf(firmware_version_str, "V%d.%02d", firmware_major, firmware_minor);
  //               id(firmware_version).publish_state(std::string(firmware_version_str));
  //             } else {
  //               id(firmware_version).publish_state("Unknown");
  //             }
  //           type_id: lambdaaction_id_6
  //         - switch.turn_off:
  //             id: mmwave_configuration
  //           type_id: switch__turnoffaction_id
  //         - delay: 1s
  //           type_id: delayaction_id_6
  //       automation_id: automation_id_7
  //       trigger_id: button_buttonpresstrigger_id_2
  //   name: get_mmwave_firmware
  get_mmwave_firmware = new template_::TemplateButton();
  App.register_button(get_mmwave_firmware);
  get_mmwave_firmware->set_name("get_mmwave_firmware", 634457689);
  get_mmwave_firmware->set_disabled_by_default(true);
  get_mmwave_firmware->set_internal(true);
  get_mmwave_firmware->set_entity_category(::ENTITY_CATEGORY_CONFIG);
  button_buttonpresstrigger_id_2 = new button::ButtonPressTrigger(get_mmwave_firmware);
  automation_id_7 = new Automation<>(button_buttonpresstrigger_id_2);
  // button.template:
  //   platform: template
  //   name: Reboot mmWave Sensor
  //   id: reboot_mmwave_sensor
  //   disabled_by_default: true
  //   entity_category: config
  //   on_press:
  //     - then:
  //         - switch.turn_on:
  //             id: mmwave_configuration
  //           type_id: switch__turnonaction_id_2
  //         - delay: 1s
  //           type_id: delayaction_id_7
  //         - uart.write:
  //             id: uart_bus
  //             data:
  //               - 0xFD
  //               - 0xFC
  //               - 0xFB
  //               - 0xFA
  //               - 0x02
  //               - 0x00
  //               - 0xA3
  //               - 0x00
  //               - 0x04
  //               - 0x03
  //               - 0x02
  //               - 0x01
  //           type_id: uart_uartwriteaction_id_2
  //       automation_id: automation_id_8
  //       trigger_id: button_buttonpresstrigger_id_3
  reboot_mmwave_sensor = new template_::TemplateButton();
  App.register_button(reboot_mmwave_sensor);
  reboot_mmwave_sensor->set_name("Reboot mmWave Sensor", 476667313);
  reboot_mmwave_sensor->set_disabled_by_default(true);
  reboot_mmwave_sensor->set_entity_category(::ENTITY_CATEGORY_CONFIG);
  button_buttonpresstrigger_id_3 = new button::ButtonPressTrigger(reboot_mmwave_sensor);
  automation_id_8 = new Automation<>(button_buttonpresstrigger_id_3);
  // button.template:
  //   platform: template
  //   name: Factory Reset mmWave Sensor
  //   id: factory_reset_mmwave_sensor
  //   disabled_by_default: true
  //   entity_category: config
  //   on_press:
  //     - then:
  //         - logger.log:
  //             format: Performing Factory Reset
  //             level: DEBUG
  //             logger_id: logger_logger_id
  //             tag: main
  //             args: []
  //           type_id: lambdaaction_id_7
  //         - switch.turn_on:
  //             id: mmwave_configuration
  //           type_id: switch__turnonaction_id_3
  //         - delay: 2s
  //           type_id: delayaction_id_8
  //         - uart.write:
  //             id: uart_bus
  //             data:
  //               - 0xFD
  //               - 0xFC
  //               - 0xFB
  //               - 0xFA
  //               - 0x02
  //               - 0x00
  //               - 0xA2
  //               - 0x00
  //               - 0x04
  //               - 0x03
  //               - 0x02
  //               - 0x01
  //           type_id: uart_uartwriteaction_id_3
  //         - delay: 2s
  //           type_id: delayaction_id_9
  //         - switch.turn_off:
  //             id: mmwave_configuration
  //           type_id: switch__turnoffaction_id_2
  //         - delay: 2s
  //           type_id: delayaction_id_10
  //         - button.press:
  //             id: reboot_mmwave_sensor
  //           type_id: button_pressaction_id_3
  //       automation_id: automation_id_9
  //       trigger_id: button_buttonpresstrigger_id_4
  factory_reset_mmwave_sensor = new template_::TemplateButton();
  App.register_button(factory_reset_mmwave_sensor);
  factory_reset_mmwave_sensor->set_name("Factory Reset mmWave Sensor", 2045068806);
  factory_reset_mmwave_sensor->set_disabled_by_default(true);
  factory_reset_mmwave_sensor->set_entity_category(::ENTITY_CATEGORY_CONFIG);
  button_buttonpresstrigger_id_4 = new button::ButtonPressTrigger(factory_reset_mmwave_sensor);
  automation_id_9 = new Automation<>(button_buttonpresstrigger_id_4);
  lambdaaction_id_7 = new StatelessLambdaAction<>([]() -> void {
      ESP_LOGD("main", "Performing Factory Reset");
  });
  // select.template:
  //   platform: template
  //   id: firmware_ble
  //   name: Bluetooth Proxy
  //   icon: mdi:bluetooth
  //   entity_category: diagnostic
  //   optimistic: true
  //   restore_value: true
  //   options:
  //     - Disabled
  //     - Enabled
  //   initial_option: Disabled
  //   disabled_by_default: false
  //   update_interval: 60s
  firmware_ble = new template_::TemplateSelect<false, true, true, 0>();
  firmware_ble->set_update_interval(4294967295UL);
  firmware_ble->set_component_source(LOG_STR("template.select"));
  App.register_component(firmware_ble);
  App.register_select(firmware_ble);
  firmware_ble->set_name("Bluetooth Proxy", 2175629520UL);
  firmware_ble->set_icon("mdi:bluetooth");
  firmware_ble->set_entity_category(::ENTITY_CATEGORY_DIAGNOSTIC);
  firmware_ble->traits.set_options({"Disabled", "Enabled"});
  // select.template:
  //   platform: template
  //   id: firmware_co2
  //   name: CO2 Sensor
  //   icon: mdi:molecule-co2
  //   entity_category: diagnostic
  //   optimistic: true
  //   restore_value: true
  //   options:
  //     - Disabled
  //     - Enabled
  //   initial_option: Disabled
  //   disabled_by_default: false
  //   update_interval: 60s
  firmware_co2 = new template_::TemplateSelect<false, true, true, 0>();
  firmware_co2->set_update_interval(4294967295UL);
  firmware_co2->set_component_source(LOG_STR("template.select"));
  App.register_component(firmware_co2);
  App.register_select(firmware_co2);
  firmware_co2->set_name("CO2 Sensor", 239417260);
  firmware_co2->set_icon("mdi:molecule-co2");
  firmware_co2->set_entity_category(::ENTITY_CATEGORY_DIAGNOSTIC);
  firmware_co2->traits.set_options({"Disabled", "Enabled"});
  // select.template:
  //   platform: template
  //   name: Update speed
  //   id: update_speed_select
  //   icon: mdi:speedometer
  //   optimistic: true
  //   restore_value: true
  //   entity_category: config
  //   options:
  //     - Faster (0.1s)
  //     - Fast (0.2s)
  //     - Normal (0.3s)
  //     - Slow (0.4s)
  //     - Slower (0.5s)
  //   initial_option: Normal (0.3s)
  //   on_value:
  //     - then:
  //         - lambda: !lambda |-
  //             id(mmwave_update_interval) = (i + 1) * 100;
  //           type_id: lambdaaction_id_8
  //       automation_id: automation_id_10
  //       trigger_id: select_selectstatetrigger_id
  //   disabled_by_default: false
  //   update_interval: 60s
  update_speed_select = new template_::TemplateSelect<false, true, true, 2>();
  update_speed_select->set_update_interval(4294967295UL);
  update_speed_select->set_component_source(LOG_STR("template.select"));
  App.register_component(update_speed_select);
  App.register_select(update_speed_select);
  update_speed_select->set_name("Update speed", 1983814122);
  update_speed_select->set_icon("mdi:speedometer");
  update_speed_select->set_entity_category(::ENTITY_CATEGORY_CONFIG);
  update_speed_select->traits.set_options({"Faster (0.1s)", "Fast (0.2s)", "Normal (0.3s)", "Slow (0.4s)", "Slower (0.5s)"});
  select_selectstatetrigger_id = new select::SelectStateTrigger(update_speed_select);
  automation_id_10 = new Automation<StringRef, size_t>(select_selectstatetrigger_id);
  // select.template:
  //   platform: template
  //   name: Extra entities update
  //   icon: mdi:update
  //   optimistic: true
  //   restore_value: true
  //   entity_category: config
  //   options:
  //     - Every update
  //     - Every 2 updates
  //     - Every 3 updates
  //     - Every 5 updates
  //     - Every 10 updates
  //     - Every 20 updates
  //   initial_option: Every update
  //   on_value:
  //     - then:
  //         - lambda: !lambda |-
  //             switch (i) {
  //               case 3:
  //                 id(entities_update_max_count) = 5;
  //                 break;
  //               case 4:
  //                 id(entities_update_max_count) = 10;
  //                 break;
  //               case 5:
  //                 id(entities_update_max_count) = 20;
  //                 break;
  //               default:
  //                 id(entities_update_max_count) = i + 1;
  //             }
  //           type_id: lambdaaction_id_9
  //       automation_id: automation_id_11
  //       trigger_id: select_selectstatetrigger_id_2
  //   disabled_by_default: false
  //   id: template__templateselect_id
  //   update_interval: 60s
  template__templateselect_id = new template_::TemplateSelect<false, true, true, 0>();
  template__templateselect_id->set_update_interval(4294967295UL);
  template__templateselect_id->set_component_source(LOG_STR("template.select"));
  App.register_component(template__templateselect_id);
  App.register_select(template__templateselect_id);
  template__templateselect_id->set_name("Extra entities update", 4125546099UL);
  template__templateselect_id->set_icon("mdi:update");
  template__templateselect_id->set_entity_category(::ENTITY_CATEGORY_CONFIG);
  template__templateselect_id->traits.set_options({"Every update", "Every 2 updates", "Every 3 updates", "Every 5 updates", "Every 10 updates", "Every 20 updates"});
  select_selectstatetrigger_id_2 = new select::SelectStateTrigger(template__templateselect_id);
  automation_id_11 = new Automation<StringRef, size_t>(select_selectstatetrigger_id_2);
  // select.template:
  //   platform: template
  //   name: Tracking Behaviour
  //   id: tracking_behaviour
  //   icon: mdi:dots-vertical
  //   optimistic: true
  //   restore_value: true
  //   entity_category: config
  //   options:
  //     - None
  //     - Targets Position
  //     - Above + Zone count
  //     - Above + Targets active
  //     - Above + Distance and Angle
  //     - Above + Speed and Resolution
  //   initial_option: Above + Speed and Resolution
  //   on_value:
  //     - then:
  //         - lambda: !lambda |-
  //             id(extra_entities) = i;
  //   
  //             if (i < 5) {   If not using Speed and Resolution
  //               id(target1_speed).publish_state(NAN);
  //               id(target2_speed).publish_state(NAN);
  //               id(target3_speed).publish_state(NAN);
  //               id(target1_resolution).publish_state(NAN);
  //               id(target2_resolution).publish_state(NAN);
  //               id(target3_resolution).publish_state(NAN);
  //             }
  //   
  //             if (i < 4) {   If not using Distance and Angle
  //               id(target1_distance).publish_state(NAN);
  //               id(target2_distance).publish_state(NAN);
  //               id(target3_distance).publish_state(NAN);
  //               id(target1_angle).publish_state(NAN);
  //               id(target2_angle).publish_state(NAN);
  //               id(target3_angle).publish_state(NAN);
  //             }
  //   
  //             if (i < 3) {   If not using Targets active
  //               id(target1_active).publish_state(false);
  //               id(target2_active).publish_state(false);
  //               id(target3_active).publish_state(false);
  //             }
  //   
  //             if (i < 2) {   If not using Zone count
  //               id(zone1_target_count).publish_state(NAN);
  //               id(zone2_target_count).publish_state(NAN);
  //               id(zone3_target_count).publish_state(NAN);
  //               id(zone4_target_count).publish_state(NAN);
  //               id(occupancy_mask_1_target_count).publish_state(NAN);
  //               id(occupancy_mask_2_target_count).publish_state(NAN);
  //             }
  //   
  //             if (i < 1) {   If using None
  //               id(target1_x).publish_state(NAN);
  //               id(target1_y).publish_state(NAN);
  //               id(target2_x).publish_state(NAN);
  //               id(target2_y).publish_state(NAN);
  //               id(target3_x).publish_state(NAN);
  //               id(target3_y).publish_state(NAN);
  //             }
  //           type_id: lambdaaction_id_10
  //       automation_id: automation_id_12
  //       trigger_id: select_selectstatetrigger_id_3
  //   disabled_by_default: false
  //   update_interval: 60s
  tracking_behaviour = new template_::TemplateSelect<false, true, true, 5>();
  tracking_behaviour->set_update_interval(4294967295UL);
  tracking_behaviour->set_component_source(LOG_STR("template.select"));
  App.register_component(tracking_behaviour);
  App.register_select(tracking_behaviour);
  tracking_behaviour->set_name("Tracking Behaviour", 3985846102UL);
  tracking_behaviour->set_icon("mdi:dots-vertical");
  tracking_behaviour->set_entity_category(::ENTITY_CATEGORY_CONFIG);
  tracking_behaviour->traits.set_options({"None", "Targets Position", "Above + Zone count", "Above + Targets active", "Above + Distance and Angle", "Above + Speed and Resolution"});
  select_selectstatetrigger_id_3 = new select::SelectStateTrigger(tracking_behaviour);
  automation_id_12 = new Automation<StringRef, size_t>(select_selectstatetrigger_id_3);
  // interval:
  //   - interval: 1s
  //     then:
  //       - lambda: !lambda |-
  //           unsigned long now = millis();
  //           unsigned long timeout_ms = (unsigned long)(id(aggressive_timeout).state * 1000);
  //           if (id(aggressive_target_clearing).state) {
  //             if ((now - id(target1_last_update)) > timeout_ms) {
  //               if (id(target1_reset) == 0) {
  //                 if (id(target1_active).state == true) {
  //                   ESP_LOGD("custom", "No update in 3s, clearing");
  //                   id(reboot_mmwave_sensor).press();
  //                   id(target1_reset) = 1;
  //                 }
  //               }
  //             }
  //           }
  //         type_id: lambdaaction_id_11
  //     trigger_id: trigger_id
  //     automation_id: automation_id_13
  //     id: interval_intervaltrigger_id
  //     startup_delay: 0s
  interval_intervaltrigger_id = new interval::IntervalTrigger();
  interval_intervaltrigger_id->set_component_source(LOG_STR("interval"));
  App.register_component(interval_intervaltrigger_id);
  automation_id_13 = new Automation<>(interval_intervaltrigger_id);
  // text_sensor.template:
  //   platform: template
  //   disabled_by_default: true
  //   name: mmWave Firmware
  //   id: firmware_version
  //   entity_category: diagnostic
  //   update_interval: 60s
  firmware_version = new template_::TemplateTextSensor();
  App.register_text_sensor(firmware_version);
  firmware_version->set_name("mmWave Firmware", 1433581076);
  firmware_version->set_disabled_by_default(true);
  firmware_version->set_entity_category(::ENTITY_CATEGORY_DIAGNOSTIC);
  firmware_version->set_update_interval(60000);
  firmware_version->set_component_source(LOG_STR("template.text_sensor"));
  App.register_component(firmware_version);
  // switch.template:
  //   platform: template
  //   name: mmWave Configuration Mode
  //   id: mmwave_configuration
  //   disabled_by_default: true
  //   internal: true
  //   entity_category: config
  //   optimistic: true
  //   restore_mode: DISABLED
  //   turn_on_action:
  //     then:
  //       - uart.write:
  //           id: uart_bus
  //           data:
  //             - 0xFD
  //             - 0xFC
  //             - 0xFB
  //             - 0xFA
  //             - 0x04
  //             - 0x00
  //             - 0xFF
  //             - 0x00
  //             - 0x01
  //             - 0x00
  //             - 0x04
  //             - 0x03
  //             - 0x02
  //             - 0x01
  //         type_id: uart_uartwriteaction_id_4
  //     trigger_id: trigger_id_2
  //     automation_id: automation_id_14
  //   turn_off_action:
  //     then:
  //       - uart.write:
  //           id: uart_bus
  //           data:
  //             - 0xFD
  //             - 0xFC
  //             - 0xFB
  //             - 0xFA
  //             - 0x02
  //             - 0x00
  //             - 0xFE
  //             - 0x00
  //             - 0x04
  //             - 0x03
  //             - 0x02
  //             - 0x01
  //         type_id: uart_uartwriteaction_id_5
  //     trigger_id: trigger_id_3
  //     automation_id: automation_id_15
  //   assumed_state: false
  mmwave_configuration = new template_::TemplateSwitch();
  App.register_switch(mmwave_configuration);
  mmwave_configuration->set_name("mmWave Configuration Mode", 3575875283UL);
  mmwave_configuration->set_disabled_by_default(true);
  mmwave_configuration->set_internal(true);
  mmwave_configuration->set_entity_category(::ENTITY_CATEGORY_CONFIG);
  mmwave_configuration->set_restore_mode(switch_::SWITCH_RESTORE_DISABLED);
  mmwave_configuration->set_component_source(LOG_STR("template.switch"));
  App.register_component(mmwave_configuration);
  automation_id_15 = new Automation<>(mmwave_configuration->get_turn_off_trigger());
  uart_uartwriteaction_id_5 = new uart::UARTWriteAction<>();
  // switch.template:
  //   platform: template
  //   name: mmWave Bluetooth
  //   id: bluetooth_switch
  //   optimistic: true
  //   disabled_by_default: true
  //   entity_category: config
  //   turn_on_action:
  //     then:
  //       - switch.turn_on:
  //           id: mmwave_configuration
  //         type_id: switch__turnonaction_id_4
  //       - delay: 2s
  //         type_id: delayaction_id_11
  //       - uart.write:
  //           id: uart_bus
  //           data:
  //             - 0xFD
  //             - 0xFC
  //             - 0xFB
  //             - 0xFA
  //             - 0x04
  //             - 0x00
  //             - 0xA4
  //             - 0x00
  //             - 0x01
  //             - 0x00
  //             - 0x04
  //             - 0x03
  //             - 0x02
  //             - 0x01
  //         type_id: uart_uartwriteaction_id_6
  //       - delay: 2s
  //         type_id: delayaction_id_12
  //       - button.press:
  //           id: reboot_mmwave_sensor
  //         type_id: button_pressaction_id_4
  //       - delay: 2s
  //         type_id: delayaction_id_13
  //       - switch.turn_off:
  //           id: mmwave_configuration
  //         type_id: switch__turnoffaction_id_3
  //     trigger_id: trigger_id_4
  //     automation_id: automation_id_16
  //   turn_off_action:
  //     then:
  //       - switch.turn_on:
  //           id: mmwave_configuration
  //         type_id: switch__turnonaction_id_5
  //       - delay: 2s
  //         type_id: delayaction_id_14
  //       - uart.write:
  //           id: uart_bus
  //           data:
  //             - 0xFD
  //             - 0xFC
  //             - 0xFB
  //             - 0xFA
  //             - 0x04
  //             - 0x00
  //             - 0xA4
  //             - 0x00
  //             - 0x00
  //             - 0x00
  //             - 0x04
  //             - 0x03
  //             - 0x02
  //             - 0x01
  //         type_id: uart_uartwriteaction_id_7
  //       - delay: 2s
  //         type_id: delayaction_id_15
  //       - button.press:
  //           id: reboot_mmwave_sensor
  //         type_id: button_pressaction_id_5
  //       - delay: 2s
  //         type_id: delayaction_id_16
  //       - switch.turn_off:
  //           id: mmwave_configuration
  //         type_id: switch__turnoffaction_id_4
  //     trigger_id: trigger_id_5
  //     automation_id: automation_id_17
  //   restore_mode: ALWAYS_OFF
  //   assumed_state: false
  bluetooth_switch = new template_::TemplateSwitch();
  App.register_switch(bluetooth_switch);
  bluetooth_switch->set_name("mmWave Bluetooth", 3782794975UL);
  bluetooth_switch->set_disabled_by_default(true);
  bluetooth_switch->set_entity_category(::ENTITY_CATEGORY_CONFIG);
  bluetooth_switch->set_restore_mode(switch_::SWITCH_ALWAYS_OFF);
  bluetooth_switch->set_component_source(LOG_STR("template.switch"));
  App.register_component(bluetooth_switch);
  automation_id_17 = new Automation<>(bluetooth_switch->get_turn_off_trigger());
  switch__turnonaction_id_5 = new switch_::TurnOnAction<>(mmwave_configuration);
  delayaction_id_14 = new DelayAction<>();
  delayaction_id_14->set_component_source(LOG_STR("template.switch"));
  App.register_component(delayaction_id_14);
  delayaction_id_14->set_delay(2000);
  uart_uartwriteaction_id_7 = new uart::UARTWriteAction<>();
  // switch.template:
  //   platform: template
  //   name: Stale Target Reset
  //   id: aggressive_target_clearing
  //   restore_mode: RESTORE_DEFAULT_OFF
  //   optimistic: true
  //   entity_category: config
  //   disabled_by_default: false
  //   assumed_state: false
  aggressive_target_clearing = new template_::TemplateSwitch();
  App.register_switch(aggressive_target_clearing);
  aggressive_target_clearing->set_name("Stale Target Reset", 3260071392UL);
  aggressive_target_clearing->set_entity_category(::ENTITY_CATEGORY_CONFIG);
  aggressive_target_clearing->set_restore_mode(switch_::SWITCH_RESTORE_DEFAULT_OFF);
  aggressive_target_clearing->set_component_source(LOG_STR("template.switch"));
  App.register_component(aggressive_target_clearing);
  aggressive_target_clearing->set_optimistic(true);
  aggressive_target_clearing->set_assumed_state(false);
  // switch.template:
  //   platform: template
  //   name: Upside Down Mounting
  //   id: inverse_mounting
  //   restore_mode: RESTORE_DEFAULT_OFF
  //   optimistic: true
  //   entity_category: config
  //   icon: mdi:rotate-180
  //   disabled_by_default: false
  //   assumed_state: false
  inverse_mounting = new template_::TemplateSwitch();
  App.register_switch(inverse_mounting);
  inverse_mounting->set_name("Upside Down Mounting", 1305263360);
  inverse_mounting->set_icon("mdi:rotate-180");
  inverse_mounting->set_entity_category(::ENTITY_CATEGORY_CONFIG);
  inverse_mounting->set_restore_mode(switch_::SWITCH_RESTORE_DEFAULT_OFF);
  inverse_mounting->set_component_source(LOG_STR("template.switch"));
  App.register_component(inverse_mounting);
  inverse_mounting->set_optimistic(true);
  inverse_mounting->set_assumed_state(false);
  // switch.template:
  //   platform: template
  //   name: Entry Exit Enabled
  //   id: entry_exit_enabled
  //   restore_mode: RESTORE_DEFAULT_OFF
  //   optimistic: true
  //   entity_category: config
  //   disabled_by_default: false
  //   assumed_state: false
  entry_exit_enabled = new template_::TemplateSwitch();
  App.register_switch(entry_exit_enabled);
  entry_exit_enabled->set_name("Entry Exit Enabled", 1083340844);
  entry_exit_enabled->set_entity_category(::ENTITY_CATEGORY_CONFIG);
  entry_exit_enabled->set_restore_mode(switch_::SWITCH_RESTORE_DEFAULT_OFF);
  entry_exit_enabled->set_component_source(LOG_STR("template.switch"));
  App.register_component(entry_exit_enabled);
  entry_exit_enabled->set_optimistic(true);
  entry_exit_enabled->set_assumed_state(false);
  // switch.template:
  //   platform: template
  //   name: Polygon Zones
  //   id: polygon_zones_enabled
  //   restore_mode: RESTORE_DEFAULT_OFF
  //   optimistic: true
  //   entity_category: config
  //   icon: mdi:vector-polygon
  //   disabled_by_default: false
  //   assumed_state: false
  polygon_zones_enabled = new template_::TemplateSwitch();
  App.register_switch(polygon_zones_enabled);
  polygon_zones_enabled->set_name("Polygon Zones", 2093414309);
  polygon_zones_enabled->set_icon("mdi:vector-polygon");
  polygon_zones_enabled->set_entity_category(::ENTITY_CATEGORY_CONFIG);
  polygon_zones_enabled->set_restore_mode(switch_::SWITCH_RESTORE_DEFAULT_OFF);
  polygon_zones_enabled->set_component_source(LOG_STR("template.switch"));
  App.register_component(polygon_zones_enabled);
  polygon_zones_enabled->set_optimistic(true);
  polygon_zones_enabled->set_assumed_state(false);
  // text.template:
  //   platform: template
  //   name: Polygon Zone 1
  //   id: poly_zone_1
  //   mode: TEXT
  //   optimistic: true
  //   restore_value: true
  //   initial_value: ''
  //   disabled_by_default: false
  //   entity_category: config
  //   icon: mdi:vector-polygon
  //   min_length: 0
  //   max_length: 255
  //   update_interval: 60s
  poly_zone_1 = new template_::TemplateText();
  App.register_text(poly_zone_1);
  poly_zone_1->set_name("Polygon Zone 1", 4130843802UL);
  poly_zone_1->set_icon("mdi:vector-polygon");
  poly_zone_1->set_entity_category(::ENTITY_CATEGORY_CONFIG);
  poly_zone_1->traits.set_min_length(0);
  poly_zone_1->traits.set_max_length(255);
  poly_zone_1->traits.set_mode(text::TEXT_MODE_TEXT);
  poly_zone_1->set_update_interval(60000);
  poly_zone_1->set_component_source(LOG_STR("template.text"));
  App.register_component(poly_zone_1);
  poly_zone_1->set_optimistic(true);
  poly_zone_1->set_value_saver(new template_::TextSaver<255>());
  // text.template:
  //   platform: template
  //   name: Polygon Zone 2
  //   id: poly_zone_2
  //   mode: TEXT
  //   optimistic: true
  //   restore_value: true
  //   initial_value: ''
  //   disabled_by_default: false
  //   entity_category: config
  //   icon: mdi:vector-polygon
  //   min_length: 0
  //   max_length: 255
  //   update_interval: 60s
  poly_zone_2 = new template_::TemplateText();
  App.register_text(poly_zone_2);
  poly_zone_2->set_name("Polygon Zone 2", 4130843801UL);
  poly_zone_2->set_icon("mdi:vector-polygon");
  poly_zone_2->set_entity_category(::ENTITY_CATEGORY_CONFIG);
  poly_zone_2->traits.set_min_length(0);
  poly_zone_2->traits.set_max_length(255);
  poly_zone_2->traits.set_mode(text::TEXT_MODE_TEXT);
  poly_zone_2->set_update_interval(60000);
  poly_zone_2->set_component_source(LOG_STR("template.text"));
  App.register_component(poly_zone_2);
  poly_zone_2->set_optimistic(true);
  poly_zone_2->set_value_saver(new template_::TextSaver<255>());
  // text.template:
  //   platform: template
  //   name: Polygon Zone 3
  //   id: poly_zone_3
  //   mode: TEXT
  //   optimistic: true
  //   restore_value: true
  //   initial_value: ''
  //   disabled_by_default: false
  //   entity_category: config
  //   icon: mdi:vector-polygon
  //   min_length: 0
  //   max_length: 255
  //   update_interval: 60s
  poly_zone_3 = new template_::TemplateText();
  App.register_text(poly_zone_3);
  poly_zone_3->set_name("Polygon Zone 3", 4130843800UL);
  poly_zone_3->set_icon("mdi:vector-polygon");
  poly_zone_3->set_entity_category(::ENTITY_CATEGORY_CONFIG);
  poly_zone_3->traits.set_min_length(0);
  poly_zone_3->traits.set_max_length(255);
  poly_zone_3->traits.set_mode(text::TEXT_MODE_TEXT);
  poly_zone_3->set_update_interval(60000);
  poly_zone_3->set_component_source(LOG_STR("template.text"));
  App.register_component(poly_zone_3);
  poly_zone_3->set_optimistic(true);
  poly_zone_3->set_value_saver(new template_::TextSaver<255>());
  // text.template:
  //   platform: template
  //   name: Polygon Zone 4
  //   id: poly_zone_4
  //   mode: TEXT
  //   optimistic: true
  //   restore_value: true
  //   initial_value: ''
  //   disabled_by_default: false
  //   entity_category: config
  //   icon: mdi:vector-polygon
  //   min_length: 0
  //   max_length: 255
  //   update_interval: 60s
  poly_zone_4 = new template_::TemplateText();
  App.register_text(poly_zone_4);
  poly_zone_4->set_name("Polygon Zone 4", 4130843807UL);
  poly_zone_4->set_icon("mdi:vector-polygon");
  poly_zone_4->set_entity_category(::ENTITY_CATEGORY_CONFIG);
  poly_zone_4->traits.set_min_length(0);
  poly_zone_4->traits.set_max_length(255);
  poly_zone_4->traits.set_mode(text::TEXT_MODE_TEXT);
  poly_zone_4->set_update_interval(60000);
  poly_zone_4->set_component_source(LOG_STR("template.text"));
  App.register_component(poly_zone_4);
  poly_zone_4->set_optimistic(true);
  poly_zone_4->set_value_saver(new template_::TextSaver<255>());
  // text.template:
  //   platform: template
  //   name: Polygon Exclusion 1
  //   id: poly_exclusion_1
  //   mode: TEXT
  //   optimistic: true
  //   restore_value: true
  //   initial_value: ''
  //   disabled_by_default: false
  //   entity_category: config
  //   icon: mdi:vector-polygon
  //   min_length: 0
  //   max_length: 255
  //   update_interval: 60s
  poly_exclusion_1 = new template_::TemplateText();
  App.register_text(poly_exclusion_1);
  poly_exclusion_1->set_name("Polygon Exclusion 1", 711362016);
  poly_exclusion_1->set_icon("mdi:vector-polygon");
  poly_exclusion_1->set_entity_category(::ENTITY_CATEGORY_CONFIG);
  poly_exclusion_1->traits.set_min_length(0);
  poly_exclusion_1->traits.set_max_length(255);
  poly_exclusion_1->traits.set_mode(text::TEXT_MODE_TEXT);
  poly_exclusion_1->set_update_interval(60000);
  poly_exclusion_1->set_component_source(LOG_STR("template.text"));
  App.register_component(poly_exclusion_1);
  poly_exclusion_1->set_optimistic(true);
  poly_exclusion_1->set_value_saver(new template_::TextSaver<255>());
  // text.template:
  //   platform: template
  //   name: Polygon Exclusion 2
  //   id: poly_exclusion_2
  //   mode: TEXT
  //   optimistic: true
  //   restore_value: true
  //   initial_value: ''
  //   disabled_by_default: false
  //   entity_category: config
  //   icon: mdi:vector-polygon
  //   min_length: 0
  //   max_length: 255
  //   update_interval: 60s
  poly_exclusion_2 = new template_::TemplateText();
  App.register_text(poly_exclusion_2);
  poly_exclusion_2->set_name("Polygon Exclusion 2", 711362019);
  poly_exclusion_2->set_icon("mdi:vector-polygon");
  poly_exclusion_2->set_entity_category(::ENTITY_CATEGORY_CONFIG);
  poly_exclusion_2->traits.set_min_length(0);
  poly_exclusion_2->traits.set_max_length(255);
  poly_exclusion_2->traits.set_mode(text::TEXT_MODE_TEXT);
  poly_exclusion_2->set_update_interval(60000);
  poly_exclusion_2->set_component_source(LOG_STR("template.text"));
  App.register_component(poly_exclusion_2);
  poly_exclusion_2->set_optimistic(true);
  poly_exclusion_2->set_value_saver(new template_::TextSaver<255>());
  // text.template:
  //   platform: template
  //   name: Polygon Entry 1
  //   id: poly_entry_1
  //   mode: TEXT
  //   optimistic: true
  //   restore_value: true
  //   initial_value: ''
  //   disabled_by_default: false
  //   entity_category: config
  //   icon: mdi:vector-polygon
  //   min_length: 0
  //   max_length: 255
  //   update_interval: 60s
  poly_entry_1 = new template_::TemplateText();
  App.register_text(poly_entry_1);
  poly_entry_1->set_name("Polygon Entry 1", 3731447120UL);
  poly_entry_1->set_icon("mdi:vector-polygon");
  poly_entry_1->set_entity_category(::ENTITY_CATEGORY_CONFIG);
  poly_entry_1->traits.set_min_length(0);
  poly_entry_1->traits.set_max_length(255);
  poly_entry_1->traits.set_mode(text::TEXT_MODE_TEXT);
  poly_entry_1->set_update_interval(60000);
  poly_entry_1->set_component_source(LOG_STR("template.text"));
  App.register_component(poly_entry_1);
  poly_entry_1->set_optimistic(true);
  poly_entry_1->set_value_saver(new template_::TextSaver<255>());
  // text.template:
  //   platform: template
  //   name: Polygon Entry 2
  //   id: poly_entry_2
  //   mode: TEXT
  //   optimistic: true
  //   restore_value: true
  //   initial_value: ''
  //   disabled_by_default: false
  //   entity_category: config
  //   icon: mdi:vector-polygon
  //   min_length: 0
  //   max_length: 255
  //   update_interval: 60s
  poly_entry_2 = new template_::TemplateText();
  App.register_text(poly_entry_2);
  poly_entry_2->set_name("Polygon Entry 2", 3731447123UL);
  poly_entry_2->set_icon("mdi:vector-polygon");
  poly_entry_2->set_entity_category(::ENTITY_CATEGORY_CONFIG);
  poly_entry_2->traits.set_min_length(0);
  poly_entry_2->traits.set_max_length(255);
  poly_entry_2->traits.set_mode(text::TEXT_MODE_TEXT);
  poly_entry_2->set_update_interval(60000);
  poly_entry_2->set_component_source(LOG_STR("template.text"));
  App.register_component(poly_entry_2);
  poly_entry_2->set_optimistic(true);
  poly_entry_2->set_value_saver(new template_::TextSaver<255>());
  // uart:
  //   id: uart_bus
  //   tx_pin:
  //     number: 21
  //     mode:
  //       input: true
  //       pullup: true
  //       output: false
  //       open_drain: false
  //       pulldown: false
  //     id: esp32_esp32internalgpiopin_id_4
  //     inverted: false
  //     ignore_pin_validation_error: false
  //     ignore_strapping_warning: false
  //     drive_strength: 20.0
  //   rx_pin:
  //     number: 20
  //     mode:
  //       input: true
  //       pullup: true
  //       output: false
  //       open_drain: false
  //       pulldown: false
  //     id: esp32_esp32internalgpiopin_id_5
  //     inverted: false
  //     ignore_pin_validation_error: false
  //     ignore_strapping_warning: false
  //     drive_strength: 20.0
  //   baud_rate: 256000
  //   parity: NONE
  //   stop_bits: 1
  //   data_bits: 8
  //   debug:
  //     direction: BOTH
  //     dummy_receiver: true
  //     after:
  //       delimiter:
  //         - 0x55
  //         - 0xCC
  //       bytes: 150
  //       timeout: 100ms
  //     sequence:
  //       - then:
  //           - lambda: !lambda "if ((millis() - id(mmwave_update_time)) <= id(mmwave_update_interval))
  //               \ { \n  return;\n};\nid(mmwave_update_time) = millis();\n\nif (bytes.size()
  //               \ != 30) {\n  ESP_LOGW(\"LD2450\", \"Expected 30 bytes but received %hu!\"
  //               , bytes.size());\n  return;\n}\n\n Temporarily blank NeoPixels during
  //               \ LD2450 measurement processing\n to avoid RMT interference with UART
  //               \ reception\n{\n  auto *strip = id(rgb_strip).get_output();\n  for (int
  //               \ i = 0; i < strip->size(); i++) {\n    (*strip)[i] = light::ESPColor(0,
  //               \ 0, 0);\n  }\n  strip->schedule_show();\n}\n\nbool update_entities =
  //               \ false;\nif(id(extra_entities) != 0) {\n  id(entities_update_count) +=
  //               \ 1;\n  update_entities = id(entities_update_count) >= id(entities_update_max_count);\n
  //               \  if (update_entities) {\n    id(entities_update_count) = 0;\n  }\n}\n
  //               \nconst static float RADIANS_TO_DEGREES = 180.0 / 3.14159265358979323846;\n
  //               const static float DEGREES_TO_RADIANS = 3.14159265358979323846 / 180.0;\n
  //               const static int16_t MIN_INT16_VAL = -32768;\n\nfloat max_distance = float(id(distance).state)
  //               \ * 10;\nfloat installation_angle = id(installation_angle_ui).state *
  //               \ DEGREES_TO_RADIANS;\n\nstatic unsigned long assumed_present_until =
  //               \ 0;\nstatic bool prev_detected[3] = {false,false,false};\nconst static
  //               \ int MAX_POLY_VERTICES = 20;\n\nstruct ParsedPolygon {\n  float vx[20];\n
  //               \  float vy[20];\n  int count;\n};\n\nstatic ParsedPolygon poly_zones[4];\n
  //               static ParsedPolygon poly_exclusions[2];\nstatic ParsedPolygon poly_entries[2];\n
  //               static std::string last_poly_zone_text[4];\nstatic std::string last_poly_excl_text[2];\n
  //               static std::string last_poly_entry_text[2];\nstatic bool poly_initialized
  //               \ = false;\n\nauto parse_polygon_text = [](const std::string& text, ParsedPolygon&
  //               \ poly) {\n  poly.count = 0;\n  if (text.empty()) return;\n\n  size_t
  //               \ pos = 0;\n  while (pos < text.length() && poly.count < 20) {\n    int
  //               \ x, y;\n    int chars_read;\n    if (sscanf(text.c_str() + pos, \"%d:%d%n\"
  //               , &x, &y, &chars_read) == 2) {\n      poly.vx[poly.count] = (float)x;\n
  //               \      poly.vy[poly.count] = (float)y;\n      poly.count++;\n      pos
  //               \ += chars_read;\n      if (pos < text.length() && text[pos] == ';') pos++;\n
  //               \    } else {\n      break;\n    }\n  }\n};\n\nauto point_in_poly = [](float
  //               \ px, float py, const ParsedPolygon& poly) -> bool {\n  if (poly.count
  //               \ < 3) return false;\n\n  bool inside = false;\n  for (int i = 0, j =
  //               \ poly.count - 1; i < poly.count; j = i++) {\n    float xi = poly.vx[i],
  //               \ yi = poly.vy[i];\n    float xj = poly.vx[j], yj = poly.vy[j];\n\n  
  //               \  if (((yi > py) != (yj > py)) &&\n        (px < (xj - xi) * (py - yi)
  //               \ / (yj - yi) + xi)) {\n      inside = !inside;\n    }\n  }\n  return
  //               \ inside;\n};\n\nbool polygon_mode = id(polygon_zones_enabled).state;\n
  //               if (polygon_mode) {\n  std::string z1_text = id(poly_zone_1).state;\n
  //               \  std::string z2_text = id(poly_zone_2).state;\n  std::string z3_text
  //               \ = id(poly_zone_3).state;\n  std::string z4_text = id(poly_zone_4).state;\n
  //               \  if (!poly_initialized || z1_text != last_poly_zone_text[0]) {\n   
  //               \ parse_polygon_text(z1_text, poly_zones[0]);\n    last_poly_zone_text[0]
  //               \ = z1_text;\n  }\n  if (!poly_initialized || z2_text != last_poly_zone_text[1])
  //               \ {\n    parse_polygon_text(z2_text, poly_zones[1]);\n    last_poly_zone_text[1]
  //               \ = z2_text;\n  }\n  if (!poly_initialized || z3_text != last_poly_zone_text[2])
  //               \ {\n    parse_polygon_text(z3_text, poly_zones[2]);\n    last_poly_zone_text[2]
  //               \ = z3_text;\n  }\n  if (!poly_initialized || z4_text != last_poly_zone_text[3])
  //               \ {\n    parse_polygon_text(z4_text, poly_zones[3]);\n    last_poly_zone_text[3]
  //               \ = z4_text;\n  }\n\n  std::string e1_text = id(poly_exclusion_1).state;\n
  //               \  std::string e2_text = id(poly_exclusion_2).state;\n  if (!poly_initialized
  //               \ || e1_text != last_poly_excl_text[0]) {\n    parse_polygon_text(e1_text,
  //               \ poly_exclusions[0]);\n    last_poly_excl_text[0] = e1_text;\n  }\n 
  //               \ if (!poly_initialized || e2_text != last_poly_excl_text[1]) {\n    parse_polygon_text(e2_text,
  //               \ poly_exclusions[1]);\n    last_poly_excl_text[1] = e2_text;\n  }\n\n
  //               \  std::string en1_text = id(poly_entry_1).state;\n  std::string en2_text
  //               \ = id(poly_entry_2).state;\n  if (!poly_initialized || en1_text != last_poly_entry_text[0])
  //               \ {\n    parse_polygon_text(en1_text, poly_entries[0]);\n    last_poly_entry_text[0]
  //               \ = en1_text;\n  }\n  if (!poly_initialized || en2_text != last_poly_entry_text[1])
  //               \ {\n    parse_polygon_text(en2_text, poly_entries[1]);\n    last_poly_entry_text[1]
  //               \ = en2_text;\n  }\n\n  poly_initialized = true;\n}\n\n Extracted for
  //               \ consistency of read values\nint zone1_count = 0;\nint zone1_begin_x_value
  //               \ = min(id(zone1_begin_x).state, id(zone1_end_x).state);\nint zone1_end_x_value
  //               \ = max(id(zone1_begin_x).state, id(zone1_end_x).state);\nint zone1_begin_y_value
  //               \ = min(id(zone1_begin_y).state, id(zone1_end_y).state);\nint zone1_end_y_value
  //               \ = max(id(zone1_begin_y).state, id(zone1_end_y).state);\n\nint zone2_count
  //               \ = 0;\nint zone2_begin_x_value = min(id(zone2_begin_x).state, id(zone2_end_x).state);\n
  //               int zone2_end_x_value = max(id(zone2_begin_x).state, id(zone2_end_x).state);\n
  //               int zone2_begin_y_value = min(id(zone2_begin_y).state, id(zone2_end_y).state);\n
  //               int zone2_end_y_value = max(id(zone2_begin_y).state, id(zone2_end_y).state);\n
  //               \nint zone3_count = 0;\nint zone3_begin_x_value = min(id(zone3_begin_x).state,
  //               \ id(zone3_end_x).state);\nint zone3_end_x_value = max(id(zone3_begin_x).state,
  //               \ id(zone3_end_x).state);\nint zone3_begin_y_value = min(id(zone3_begin_y).state,
  //               \ id(zone3_end_y).state);\nint zone3_end_y_value = max(id(zone3_begin_y).state,
  //               \ id(zone3_end_y).state);\n\nint zone4_count = 0;\nint zone4_begin_x_value
  //               \ = min(id(zone4_begin_x).state, id(zone4_end_x).state);\nint zone4_end_x_value
  //               \ = max(id(zone4_begin_x).state, id(zone4_end_x).state);\nint zone4_begin_y_value
  //               \ = min(id(zone4_begin_y).state, id(zone4_end_y).state);\nint zone4_end_y_value
  //               \ = max(id(zone4_begin_y).state, id(zone4_end_y).state);\n\nint occupancy_mask_1_count
  //               \ = 0;\nint occupancy_mask_1_begin_x_value = min(id(occupancy_mask_1_begin_x).state,
  //               \ id(occupancy_mask_1_end_x).state);\nint occupancy_mask_1_end_x_value
  //               \ = max(id(occupancy_mask_1_begin_x).state, id(occupancy_mask_1_end_x).state);\n
  //               int occupancy_mask_1_begin_y_value = min(id(occupancy_mask_1_begin_y).state,
  //               \ id(occupancy_mask_1_end_y).state);\nint occupancy_mask_1_end_y_value
  //               \ = max(id(occupancy_mask_1_begin_y).state, id(occupancy_mask_1_end_y).state);\n
  //               int occupancy_mask_2_count = 0;\nint occupancy_mask_2_begin_x_value =
  //               \ min(id(occupancy_mask_2_begin_x).state, id(occupancy_mask_2_end_x).state);\n
  //               int occupancy_mask_2_end_x_value = max(id(occupancy_mask_2_begin_x).state,
  //               \ id(occupancy_mask_2_end_x).state);\nint occupancy_mask_2_begin_y_value
  //               \ = min(id(occupancy_mask_2_begin_y).state, id(occupancy_mask_2_end_y).state);\n
  //               int occupancy_mask_2_end_y_value = max(id(occupancy_mask_2_begin_y).state,
  //               \ id(occupancy_mask_2_end_y).state);\n\nbool p1_detected = *((uint16_t
  //               \ *)(&bytes[10])) != 0;\nbool p2_detected = *((uint16_t *)(&bytes[18]))
  //               \ != 0;\nbool p3_detected = *((uint16_t *)(&bytes[26])) != 0;\nbool target_masked
  //               \ = false;\n\nif (p1_detected) {\n  int16_t p1_x = *((int16_t *)(&bytes[4]));\n
  //               \  if (p1_x < 0) p1_x += MIN_INT16_VAL;\n  else p1_x = -p1_x;\n\n  int16_t
  //               \ p1_y = *((int16_t *)(&bytes[6]));\n  if (p1_y < 0) p1_y += MIN_INT16_VAL;\n
  //               \  else p1_y = -p1_y;\n\n  float p1_distance = sqrt(p1_x * p1_x + p1_y
  //               \ * p1_y);\n  \n  if (id(inverse_mounting).state) {\n    p1_x = -p1_x;\n
  //               \  }\n  \n  if (p1_distance > max_distance) {\n    p1_detected = false;\n
  //               \  } else {\n    float p1_angle;\n    if (installation_angle != 0 || (update_entities
  //               \ && id(extra_entities) >= 4)) {\n      p1_angle = atan2(p1_y, p1_x);\n
  //               \    }\n    if (installation_angle != 0) {\n      float angle = p1_angle
  //               \ - installation_angle;\n      p1_x = p1_distance * cos(angle);\n    
  //               \  p1_y = p1_distance * sin(angle);\n    }\n    if (polygon_mode) {\n
  //               \      if (point_in_poly(p1_x, p1_y, poly_exclusions[0])) {\n        occupancy_mask_1_count++;\n
  //               \        p1_detected = false;\n        target_masked = true;\n      }
  //               \ else if (point_in_poly(p1_x, p1_y, poly_exclusions[1])) {\n        occupancy_mask_2_count++;\n
  //               \        p1_detected = false;\n        target_masked = true;\n      }
  //               \ else {\n        if (point_in_poly(p1_x, p1_y, poly_zones[0])) {\n  
  //               \        zone1_count++;\n          id(last_zone_hold) = 1;\n        }\n
  //               \        if (point_in_poly(p1_x, p1_y, poly_zones[1])) {\n          zone2_count++;\n
  //               \          id(last_zone_hold) = 2;\n        }\n        if (point_in_poly(p1_x,
  //               \ p1_y, poly_zones[2])) {\n          zone3_count++;\n          id(last_zone_hold)
  //               \ = 3;\n        }\n        if (point_in_poly(p1_x, p1_y, poly_zones[3]))
  //               \ {\n          zone4_count++;\n          id(last_zone_hold) = 4;\n   
  //               \     }\n      }\n    } else {\n      if ((occupancy_mask_1_begin_x_value
  //               \ <= p1_x && p1_x <= occupancy_mask_1_end_x_value) &&\n          (occupancy_mask_1_begin_y_value
  //               \ <= p1_y && p1_y <= occupancy_mask_1_end_y_value)) {\n        occupancy_mask_1_count++;\n
  //               \        p1_detected = false;\n        target_masked = true;\n      }
  //               \ else if ((occupancy_mask_2_begin_x_value <= p1_x && p1_x <= occupancy_mask_2_end_x_value)
  //               \ &&\n          (occupancy_mask_2_begin_y_value <= p1_y && p1_y <= occupancy_mask_2_end_y_value))
  //               \ {\n        occupancy_mask_2_count++;\n        p1_detected = false;\n
  //               \        target_masked = true;\n      } else {\n        if ((zone1_begin_x_value
  //               \ <= p1_x && p1_x <= zone1_end_x_value) &&\n            (zone1_begin_y_value
  //               \ <= p1_y && p1_y <= zone1_end_y_value)) {\n          zone1_count++;\n
  //               \          id(last_zone_hold) = 1;\n        }\n        if ((zone2_begin_x_value
  //               \ <= p1_x && p1_x <= zone2_end_x_value) &&\n            (zone2_begin_y_value
  //               \ <= p1_y && p1_y <= zone2_end_y_value)) {\n          zone2_count++;\n
  //               \          id(last_zone_hold) = 2;\n        }\n        if ((zone3_begin_x_value
  //               \ <= p1_x && p1_x <= zone3_end_x_value) &&\n            (zone3_begin_y_value
  //               \ <= p1_y && p1_y <= zone3_end_y_value)) {\n          zone3_count++;\n
  //               \          id(last_zone_hold) = 3;\n        }\n        if ((zone4_begin_x_value
  //               \ <= p1_x && p1_x <= zone4_end_x_value) &&\n            (zone4_begin_y_value
  //               \ <= p1_y && p1_y <= zone4_end_y_value)) {\n          zone4_count++;\n
  //               \          id(last_zone_hold) = 4;\n        }\n      }\n    }\n    if
  //               \ (update_entities) {\n      switch (id(extra_entities)) {\n        case
  //               \ 5:\n          {\n            uint16_t p1_resolution = *((uint16_t *)(&bytes[10]));\n
  //               \            int16_t p1_speed = *((int16_t *)(&bytes[8]));\n         
  //               \   if (p1_speed < 0) p1_speed += MIN_INT16_VAL;\n            else p1_speed
  //               \ = -p1_speed;\n            float p1_speed_float = p1_speed / 100.0;\n
  //               \n            if (id(target1_speed).state != p1_speed_float) {\n     
  //               \         id(target1_speed).publish_state(p1_speed_float);\n         
  //               \   }\n            if (id(target1_resolution).state != p1_resolution)
  //               \ {\n              id(target1_resolution).publish_state(p1_resolution);\n
  //               \            }\n          }\n        case 4:\n          p1_angle = (p1_angle
  //               \ * RADIANS_TO_DEGREES) - 90;\n\n          if (id(target1_angle).state
  //               \ != p1_angle) {\n            id(target1_angle).publish_state(p1_angle);\n
  //               \          }\n          if (id(target1_distance).state != p1_distance)
  //               \ {\n            id(target1_distance).publish_state(p1_distance);\n  
  //               \        }\n        case 3:\n          id(target1_active).publish_state(true);\n
  //               \        case 2:\n        case 1:\n          if (id(target1_x).state !=
  //               \ p1_x) {\n            id(target1_x).publish_state(p1_x);\n          }\n
  //               \          if (id(target1_y).state != p1_y) {\n            id(target1_y).publish_state(p1_y);\n
  //               \          }\n          id(last_target_x_mm) = p1_x;\n          id(last_target_y_mm)
  //               \ = p1_y;\n      }\n    }\n  }\n}\n\nbool any_now = p1_detected || p2_detected
  //               \ || p3_detected;\nif (update_entities && !p1_detected && !target_masked)
  //               \ {\n  bool preventClear = id(entry_exit_enabled).state && !any_now &&
  //               \ prev_detected[0];\n  switch (id(extra_entities)) {\n    case 5:\n  
  //               \    if (!(assumed_present_until != 0 && millis() < assumed_present_until)
  //               \ && !preventClear) {\n        if (id(target1_speed).state != 0) {\n 
  //               \         id(target1_speed).publish_state(0);\n        }\n        if (id(target1_resolution).state
  //               \ != 0) {\n          id(target1_resolution).publish_state(0);\n      
  //               \  }\n      }\n    case 4:\n      if (!(assumed_present_until != 0 &&
  //               \ millis() < assumed_present_until) && !preventClear) {\n        if (id(target1_distance).state
  //               \ != 0) {\n          id(target1_distance).publish_state(0);\n        }\n
  //               \        if (id(target1_angle).state != 0) {\n          id(target1_angle).publish_state(0);\n
  //               \        }\n      }\n    case 3:\n      if (!(assumed_present_until !=
  //               \ 0 && millis() < assumed_present_until) && !preventClear) {\n       
  //               \ id(target1_active).publish_state(false);\n      }\n    case 2:\n   
  //               \ case 1:\n      if (!(assumed_present_until != 0 && millis() < assumed_present_until)
  //               \ && !preventClear) {\n        if (id(target1_x).state != 0) {\n     
  //               \     id(target1_x).publish_state(0);\n        }\n        if (id(target1_y).state
  //               \ != 0) {\n          id(target1_y).publish_state(0);\n        }\n    
  //               \  }\n  }\n}\n\ntarget_masked = false;\n\nif (p2_detected) {\n  int16_t
  //               \ p2_x = *((int16_t *)(&bytes[12]));\n  if (p2_x < 0) p2_x += MIN_INT16_VAL;\n
  //               \  else p2_x = -p2_x;\n\n  int16_t p2_y = *((int16_t *)(&bytes[14]));\n
  //               \  if (p2_y < 0) p2_y += MIN_INT16_VAL;\n  else p2_y = -p2_y;\n\n  float
  //               \ p2_distance = sqrt(p2_x * p2_x + p2_y * p2_y);\n  \n  if (id(inverse_mounting).state)
  //               \ {\n    p2_x = -p2_x;\n  }\n  \n  if (p2_distance > max_distance) {\n
  //               \    p2_detected = false;\n  } else {\n    float p2_angle;\n    if (installation_angle
  //               \ != 0 || (update_entities && id(extra_entities) >= 4)) {\n      p2_angle
  //               \ = atan2(p2_y, p2_x);\n    }\n    if (installation_angle != 0) {\n  
  //               \    float angle = p2_angle - installation_angle;\n      p2_x = p2_distance
  //               \ * cos(angle);\n      p2_y = p2_distance * sin(angle);\n    }\n    if
  //               \ (polygon_mode) {\n      if (point_in_poly(p2_x, p2_y, poly_exclusions[0]))
  //               \ {\n        occupancy_mask_1_count++;\n        p2_detected = false;\n
  //               \        target_masked = true;\n      } else if (point_in_poly(p2_x, p2_y,
  //               \ poly_exclusions[1])) {\n        occupancy_mask_2_count++;\n        p2_detected
  //               \ = false;\n        target_masked = true;\n      } else {\n        if
  //               \ (point_in_poly(p2_x, p2_y, poly_zones[0])) { zone1_count++; id(last_zone_hold)
  //               \ = 1; }\n        if (point_in_poly(p2_x, p2_y, poly_zones[1])) { zone2_count++;
  //               \ id(last_zone_hold) = 2; }\n        if (point_in_poly(p2_x, p2_y, poly_zones[2]))
  //               \ { zone3_count++; id(last_zone_hold) = 3; }\n        if (point_in_poly(p2_x,
  //               \ p2_y, poly_zones[3])) { zone4_count++; id(last_zone_hold) = 4; }\n 
  //               \     }\n    } else {\n      if ((occupancy_mask_1_begin_x_value <= p2_x
  //               \ && p2_x <= occupancy_mask_1_end_x_value) &&\n          (occupancy_mask_1_begin_y_value
  //               \ <= p2_y && p2_y <= occupancy_mask_1_end_y_value)) {\n        occupancy_mask_1_count++;\n
  //               \        p2_detected = false;\n        target_masked = true;\n      }
  //               \ else if ((occupancy_mask_2_begin_x_value <= p2_x && p2_x <= occupancy_mask_2_end_x_value)
  //               \ &&\n          (occupancy_mask_2_begin_y_value <= p2_y && p2_y <= occupancy_mask_2_end_y_value))
  //               \ {\n        occupancy_mask_2_count++;\n        p2_detected = false;\n
  //               \        target_masked = true;\n      } else {\n        if ((zone1_begin_x_value
  //               \ <= p2_x && p2_x <= zone1_end_x_value) &&\n            (zone1_begin_y_value
  //               \ <= p2_y && p2_y <= zone1_end_y_value)) {\n          zone1_count++;\n
  //               \          id(last_zone_hold) = 1;\n        }\n        if ((zone2_begin_x_value
  //               \ <= p2_x && p2_x <= zone2_end_x_value) &&\n            (zone2_begin_y_value
  //               \ <= p2_y && p2_y <= zone2_end_y_value)) {\n          zone2_count++;\n
  //               \          id(last_zone_hold) = 2;\n        }\n        if ((zone3_begin_x_value
  //               \ <= p2_x && p2_x <= zone3_end_x_value) &&\n            (zone3_begin_y_value
  //               \ <= p2_y && p2_y <= zone3_end_y_value)) {\n          zone3_count++;\n
  //               \          id(last_zone_hold) = 3;\n        }\n        if ((zone4_begin_x_value
  //               \ <= p2_x && p2_x <= zone4_end_x_value) &&\n            (zone4_begin_y_value
  //               \ <= p2_y && p2_y <= zone4_end_y_value)) {\n          zone4_count++;\n
  //               \          id(last_zone_hold) = 4;\n        }\n      }\n    }\n    if
  //               \ (update_entities) {\n      switch (id(extra_entities)) {\n        case
  //               \ 5:\n          {\n            uint16_t p2_resolution = *((uint16_t *)(&bytes[18]));\n
  //               \            int16_t p2_speed = *((int16_t *)(&bytes[16]));\n        
  //               \    if (p2_speed < 0) p2_speed += MIN_INT16_VAL;\n            else p2_speed
  //               \ = -p2_speed;\n            float p2_speed_float = p2_speed / 100.0;\n
  //               \n            if (id(target2_speed).state != p2_speed_float) {\n     
  //               \         id(target2_speed).publish_state(p2_speed_float);\n         
  //               \   }\n            if (id(target2_resolution).state != p2_resolution)
  //               \ {\n              id(target2_resolution).publish_state(p2_resolution);\n
  //               \            }\n          }\n        case 4:\n          p2_angle = (p2_angle
  //               \ * RADIANS_TO_DEGREES) - 90;\n\n          if (id(target2_angle).state
  //               \ != p2_angle) {\n            id(target2_angle).publish_state(p2_angle);\n
  //               \          }\n          if (id(target2_distance).state != p2_distance)
  //               \ {\n            id(target2_distance).publish_state(p2_distance);\n  
  //               \        }\n        case 3:\n          id(target2_active).publish_state(true);\n
  //               \        case 2:\n        case 1:\n          if (id(target2_x).state !=
  //               \ p2_x) {\n            id(target2_x).publish_state(p2_x);\n          }\n
  //               \          if (id(target2_y).state != p2_y) {\n            id(target2_y).publish_state(p2_y);\n
  //               \          }\n          id(last_target_x_mm) = p2_x;\n          id(last_target_y_mm)
  //               \ = p2_y;\n      }\n    }\n  }\n}\n\nif (update_entities && !p2_detected
  //               \ && !target_masked) {\n  bool preventClear2 = id(entry_exit_enabled).state
  //               \ && !any_now && prev_detected[1];\n  switch (id(extra_entities)) {\n
  //               \    case 5:\n      if (!(assumed_present_until != 0 && millis() < assumed_present_until)
  //               \ && !preventClear2) {\n        if (id(target2_speed).state != 0) {\n
  //               \          id(target2_speed).publish_state(0);\n        }\n        if
  //               \ (id(target2_resolution).state != 0) {\n          id(target2_resolution).publish_state(0);\n
  //               \        }\n      }\n    case 4:\n      if (!(assumed_present_until !=
  //               \ 0 && millis() < assumed_present_until) && !preventClear2) {\n      
  //               \  if (id(target2_distance).state != 0) {\n          id(target2_distance).publish_state(0);\n
  //               \        }\n        if (id(target2_angle).state != 0) {\n          id(target2_angle).publish_state(0);\n
  //               \        }\n      }\n    case 3:\n      if (!(assumed_present_until !=
  //               \ 0 && millis() < assumed_present_until) && !preventClear2) {\n      
  //               \  id(target2_active).publish_state(false);\n      }\n    case 2:\n  
  //               \  case 1:\n      if (!(assumed_present_until != 0 && millis() < assumed_present_until)
  //               \ && !preventClear2) {\n        if (id(target2_x).state != 0) {\n    
  //               \      id(target2_x).publish_state(0);\n        }\n        if (id(target2_y).state
  //               \ != 0) {\n          id(target2_y).publish_state(0);\n        }\n    
  //               \  }\n  }\n}\n\ntarget_masked = false;\n\nif (p3_detected) {\n  int16_t
  //               \ p3_x = *((int16_t *)(&bytes[20]));\n  if (p3_x < 0) p3_x += MIN_INT16_VAL;\n
  //               \  else p3_x = -p3_x;\n\n  int16_t p3_y = *((int16_t *)(&bytes[22]));\n
  //               \  if (p3_y < 0) p3_y += MIN_INT16_VAL;\n  else p3_y = -p3_y;\n\n  float
  //               \ p3_distance = sqrt(p3_x * p3_x + p3_y * p3_y);\n  \n  if (id(inverse_mounting).state)
  //               \ {\n    p3_x = -p3_x;\n  }\n  \n  if (p3_distance > max_distance) {\n
  //               \    p3_detected = false;\n  } else {\n    float p3_angle;\n    if (installation_angle
  //               \ != 0 || (update_entities && id(extra_entities) >= 4)) {\n      p3_angle
  //               \ = atan2(p3_y, p3_x);\n    }\n    if (installation_angle != 0) {\n  
  //               \    float angle = p3_angle - installation_angle;\n      p3_x = p3_distance
  //               \ * cos(angle);\n      p3_y = p3_distance * sin(angle);\n    }\n    if
  //               \ (polygon_mode) {\n      if (point_in_poly(p3_x, p3_y, poly_exclusions[0]))
  //               \ {\n        occupancy_mask_1_count++;\n        p3_detected = false;\n
  //               \        target_masked = true;\n      } else if (point_in_poly(p3_x, p3_y,
  //               \ poly_exclusions[1])) {\n        occupancy_mask_2_count++;\n        p3_detected
  //               \ = false;\n        target_masked = true;\n      } else {\n        if
  //               \ (point_in_poly(p3_x, p3_y, poly_zones[0])) { zone1_count++; id(last_zone_hold)
  //               \ = 1; }\n        if (point_in_poly(p3_x, p3_y, poly_zones[1])) { zone2_count++;
  //               \ id(last_zone_hold) = 2; }\n        if (point_in_poly(p3_x, p3_y, poly_zones[2]))
  //               \ { zone3_count++; id(last_zone_hold) = 3; }\n        if (point_in_poly(p3_x,
  //               \ p3_y, poly_zones[3])) { zone4_count++; id(last_zone_hold) = 4; }\n 
  //               \     }\n    } else {\n      if ((occupancy_mask_1_begin_x_value <= p3_x
  //               \ && p3_x <= occupancy_mask_1_end_x_value) &&\n          (occupancy_mask_1_begin_y_value
  //               \ <= p3_y && p3_y <= occupancy_mask_1_end_y_value)) {\n        occupancy_mask_1_count++;\n
  //               \        p3_detected = false;\n        target_masked = true;\n      }
  //               \ else if ((occupancy_mask_2_begin_x_value <= p3_x && p3_x <= occupancy_mask_2_end_x_value)
  //               \ &&\n          (occupancy_mask_2_begin_y_value <= p3_y && p3_y <= occupancy_mask_2_end_y_value))
  //               \ {\n        occupancy_mask_2_count++;\n        p3_detected = false;\n
  //               \        target_masked = true;\n      } else {\n        if ((zone1_begin_x_value
  //               \ <= p3_x && p3_x <= zone1_end_x_value) &&\n            (zone1_begin_y_value
  //               \ <= p3_y && p3_y <= zone1_end_y_value)) {\n          zone1_count++;\n
  //               \          id(last_zone_hold) = 1;\n        }\n        if ((zone2_begin_x_value
  //               \ <= p3_x && p3_x <= zone2_end_x_value) &&\n            (zone2_begin_y_value
  //               \ <= p3_y && p3_y <= zone2_end_y_value)) {\n          zone2_count++;\n
  //               \          id(last_zone_hold) = 2;\n        }\n        if ((zone3_begin_x_value
  //               \ <= p3_x && p3_x <= zone3_end_x_value) &&\n            (zone3_begin_y_value
  //               \ <= p3_y && p3_y <= zone3_end_y_value)) {\n          zone3_count++;\n
  //               \          id(last_zone_hold) = 3;\n        }\n        if ((zone4_begin_x_value
  //               \ <= p3_x && p3_x <= zone4_end_x_value) &&\n            (zone4_begin_y_value
  //               \ <= p3_y && p3_y <= zone4_end_y_value)) {\n          zone4_count++;\n
  //               \          id(last_zone_hold) = 4;\n        }\n      }\n    }\n    if
  //               \ (update_entities) {\n      switch (id(extra_entities)) {\n        case
  //               \ 5:\n          {\n            uint16_t p3_resolution = *((uint16_t *)(&bytes[26]));\n
  //               \            int16_t p3_speed = *((int16_t *)(&bytes[24]));\n        
  //               \    if (p3_speed < 0) p3_speed += MIN_INT16_VAL;\n            else p3_speed
  //               \ = -p3_speed;\n            float p3_speed_float = p3_speed / 100.0;\n
  //               \n            if (id(target3_speed).state != p3_speed_float) {\n     
  //               \         id(target3_speed).publish_state(p3_speed_float);\n         
  //               \   }\n            if (id(target3_resolution).state != p3_resolution)
  //               \ {\n              id(target3_resolution).publish_state(p3_resolution);\n
  //               \            }\n          }\n        case 4:\n          p3_angle = (p3_angle
  //               \ * RADIANS_TO_DEGREES) - 90;\n          \n          if (id(target3_angle).state
  //               \ != p3_angle) {\n            id(target3_angle).publish_state(p3_angle);\n
  //               \          }\n          if (id(target3_distance).state != p3_distance)
  //               \ {\n            id(target3_distance).publish_state(p3_distance);\n  
  //               \        }\n        case 3:\n          id(target3_active).publish_state(true);\n
  //               \        case 2:\n        case 1:\n          if (id(target3_x).state !=
  //               \ p3_x) {\n            id(target3_x).publish_state(p3_x);\n          }\n
  //               \          if (id(target3_y).state != p3_y) {\n            id(target3_y).publish_state(p3_y);\n
  //               \          }\n          id(last_target_x_mm) = p3_x;\n          id(last_target_y_mm)
  //               \ = p3_y;\n      }\n    }\n  }\n}\n\nif (update_entities && !p3_detected
  //               \ && !target_masked) {\n  bool preventClear3 = id(entry_exit_enabled).state
  //               \ && !any_now && prev_detected[2];\n  switch (id(extra_entities)) {\n
  //               \    case 5:\n      if (!(assumed_present_until != 0 && millis() < assumed_present_until)
  //               \ && !preventClear3) {\n        if (id(target3_speed).state != 0) {\n
  //               \          id(target3_speed).publish_state(0);\n        }\n        if
  //               \ (id(target3_resolution).state != 0) {\n          id(target3_resolution).publish_state(0);\n
  //               \        }\n      }\n    case 4:\n      if (!(assumed_present_until !=
  //               \ 0 && millis() < assumed_present_until) && !preventClear3) {\n      
  //               \  if (id(target3_distance).state != 0) {\n          id(target3_distance).publish_state(0);\n
  //               \        }\n        if (id(target3_angle).state != 0) {\n          id(target3_angle).publish_state(0);\n
  //               \        }\n      }\n    case 3:\n      if (!(assumed_present_until !=
  //               \ 0 && millis() < assumed_present_until) && !preventClear3) {\n      
  //               \  id(target3_active).publish_state(false);\n      }\n    case 2:\n  
  //               \  case 1:\n      if (!(assumed_present_until != 0 && millis() < assumed_present_until)
  //               \ && !preventClear3) {\n        if (id(target3_x).state != 0) {\n    
  //               \      id(target3_x).publish_state(0);\n        }\n        if (id(target3_y).state
  //               \ != 0) {\n          id(target3_y).publish_state(0);\n        }\n    
  //               \  }\n  }\n}\n\nif (update_entities && id(extra_entities) >= 2) {\n  if
  //               \ (id(zone1_target_count).state != zone1_count) {\n    id(zone1_target_count).publish_state(zone1_count);\n
  //               \  }\n  if (id(zone2_target_count).state != zone2_count) {\n    id(zone2_target_count).publish_state(zone2_count);\n
  //               \  }\n  if (id(zone3_target_count).state != zone3_count) {\n    id(zone3_target_count).publish_state(zone3_count);\n
  //               \  }\n  if (id(zone4_target_count).state != zone4_count) {\n    id(zone4_target_count).publish_state(zone4_count);\n
  //               \  }\n  if (id(occupancy_mask_1_target_count).state != occupancy_mask_1_count)
  //               \ {\n    id(occupancy_mask_1_target_count).publish_state(occupancy_mask_1_count);\n
  //               \  }\n  if (id(occupancy_mask_2_target_count).state != occupancy_mask_2_count)
  //               \ {\n    id(occupancy_mask_2_target_count).publish_state(occupancy_mask_2_count);\n
  //               \  }\n}\n\n Clear last_zone_hold if targets are detected but not in
  //               \ any zone\n This prevents stale zone data from being used when assumed
  //               \ presence triggers\nbool in_any_zone = (zone1_count > 0 || zone2_count
  //               \ > 0 || zone3_count > 0 || zone4_count > 0);\nif (any_now && !in_any_zone)
  //               \ {\n  id(last_zone_hold) = 0;\n}\n\nstatic const int BUF_SZ = 600;\n
  //               struct Sample { unsigned long t; float x; float y; };\nstatic Sample hist[3][BUF_SZ];\n
  //               static uint16_t head[3] = {0,0,0};\n\nint e1_x1 = min((int)id(entry_zone_1_begin_x).state,
  //               \ (int)id(entry_zone_1_end_x).state);\nint e1_x2 = max((int)id(entry_zone_1_begin_x).state,
  //               \ (int)id(entry_zone_1_end_x).state);\nint e1_y1 = min((int)id(entry_zone_1_begin_y).state,
  //               \ (int)id(entry_zone_1_end_y).state);\nint e1_y2 = max((int)id(entry_zone_1_begin_y).state,
  //               \ (int)id(entry_zone_1_end_y).state);\nint e2_x1 = min((int)id(entry_zone_2_begin_x).state,
  //               \ (int)id(entry_zone_2_end_x).state);\nint e2_x2 = max((int)id(entry_zone_2_begin_x).state,
  //               \ (int)id(entry_zone_2_end_x).state);\nint e2_y1 = min((int)id(entry_zone_2_begin_y).state,
  //               \ (int)id(entry_zone_2_end_y).state);\nint e2_y2 = max((int)id(entry_zone_2_begin_y).state,
  //               \ (int)id(entry_zone_2_end_y).state);\n\nfloat poly_e1_y_min = 0, poly_e1_y_max
  //               \ = 0, poly_e2_y_min = 0, poly_e2_y_max = 0;\nif (polygon_mode) {\n  if
  //               \ (poly_entries[0].count >= 3) {\n    poly_e1_y_min = poly_e1_y_max =
  //               \ poly_entries[0].vy[0];\n    for (int vi = 1; vi < poly_entries[0].count;
  //               \ vi++) {\n      if (poly_entries[0].vy[vi] < poly_e1_y_min) poly_e1_y_min
  //               \ = poly_entries[0].vy[vi];\n      if (poly_entries[0].vy[vi] > poly_e1_y_max)
  //               \ poly_e1_y_max = poly_entries[0].vy[vi];\n    }\n  }\n  if (poly_entries[1].count
  //               \ >= 3) {\n    poly_e2_y_min = poly_e2_y_max = poly_entries[1].vy[0];\n
  //               \    for (int vi = 1; vi < poly_entries[1].count; vi++) {\n      if (poly_entries[1].vy[vi]
  //               \ < poly_e2_y_min) poly_e2_y_min = poly_entries[1].vy[vi];\n      if (poly_entries[1].vy[vi]
  //               \ > poly_e2_y_max) poly_e2_y_max = poly_entries[1].vy[vi];\n    }\n  }\n
  //               }\n\nunsigned long now_ms = millis();\nif (p1_detected) { head[0] = (head[0]
  //               \ + 1) % BUF_SZ; hist[0][head[0]].t = now_ms; hist[0][head[0]].x = id(target1_x).state;
  //               \ hist[0][head[0]].y = id(target1_y).state; }\nif (p2_detected) { head[1]
  //               \ = (head[1] + 1) % BUF_SZ; hist[1][head[1]].t = now_ms; hist[1][head[1]].x
  //               \ = id(target2_x).state; hist[1][head[1]].y = id(target2_y).state; }\n
  //               if (p3_detected) { head[2] = (head[2] + 1) % BUF_SZ; hist[2][head[2]].t
  //               \ = now_ms; hist[2][head[2]].x = id(target3_x).state; hist[2][head[2]].y
  //               \ = id(target3_y).state; }\n\nbool detected_now[3] = {p1_detected, p2_detected,
  //               \ p3_detected};\nbool any_detected_now = p1_detected || p2_detected ||
  //               \ p3_detected;\nif (any_detected_now) {\n  assumed_present_until = 0;\n
  //               }\n\nif (id(entry_exit_enabled).state) {\n  const unsigned long window_ms
  //               \ = 30000;\n  const float threshold_scale = 1.0f + (id(exit_threshold_pct).state
  //               \ / 100.0f);\n\n  if (!any_detected_now) {\n    for (int i = 0; i < 3;
  //               \ i++) {\n      if (prev_detected[i] && !detected_now[i]) {\n        float
  //               \ len_e1 = 0.0f, len_e2 = 0.0f;\n        bool e1_valid = polygon_mode
  //               \ ? (poly_entries[0].count >= 3) : !(e1_x1 == e1_x2 && e1_y1 == e1_y2);\n
  //               \        bool e2_valid = polygon_mode ? (poly_entries[1].count >= 3) :
  //               \ !(e2_x1 == e2_x2 && e2_y1 == e2_y2);\n        if (e1_valid) {\n    
  //               \      uint16_t ii = head[i];\n          unsigned int steps = 0;\n   
  //               \       while (steps < BUF_SZ) {\n            uint16_t jj = (ii + BUF_SZ
  //               \ - 1) % BUF_SZ;\n            const Sample &a = hist[i][jj];\n       
  //               \     const Sample &b = hist[i][ii];\n            if (b.t == 0 || a.t
  //               \ == 0) break;\n            if (now_ms - b.t > window_ms) break;\n   
  //               \         float mx = 0.5f * (a.x + b.x);\n            float my = 0.5f
  //               \ * (a.y + b.y);\n            bool in_e1 = polygon_mode ? point_in_poly(mx,
  //               \ my, poly_entries[0]) : (mx >= e1_x1 && mx <= e1_x2 && my >= e1_y1 &&
  //               \ my <= e1_y2);\n            if (in_e1) {\n              float dx = b.x
  //               \ - a.x;\n              float dy = b.y - a.y;\n              len_e1 +=
  //               \ sqrt(dx*dx + dy*dy);\n            }\n            ii = jj; steps++;\n
  //               \          }\n        }\n        if (e2_valid) {\n          uint16_t ii2
  //               \ = head[i];\n          unsigned int steps2 = 0;\n          while (steps2
  //               \ < BUF_SZ) {\n            uint16_t jj2 = (ii2 + BUF_SZ - 1) % BUF_SZ;\n
  //               \            const Sample &a2 = hist[i][jj2];\n            const Sample
  //               \ &b2 = hist[i][ii2];\n            if (b2.t == 0 || a2.t == 0) break;\n
  //               \            if (now_ms - b2.t > window_ms) break;\n            float
  //               \ mx2 = 0.5f * (a2.x + b2.x);\n            float my2 = 0.5f * (a2.y +
  //               \ b2.y);\n            bool in_e2 = polygon_mode ? point_in_poly(mx2, my2,
  //               \ poly_entries[1]) : (mx2 >= e2_x1 && mx2 <= e2_x2 && my2 >= e2_y1 &&
  //               \ my2 <= e2_y2);\n            if (in_e2) {\n              float dx2 =
  //               \ b2.x - a2.x;\n              float dy2 = b2.y - a2.y;\n             
  //               \ len_e2 += sqrt(dx2*dx2 + dy2*dy2);\n            }\n            ii2 =
  //               \ jj2; steps2++;\n          }\n        }\n        float door1_depth =
  //               \ polygon_mode ? abs(poly_e1_y_max - poly_e1_y_min) : abs(e1_y2 - e1_y1);\n
  //               \        float door2_depth = polygon_mode ? abs(poly_e2_y_max - poly_e2_y_min)
  //               \ : abs(e2_y2 - e2_y1);\n        bool valid_exit = false;\n        if
  //               \ (door1_depth > 0 && len_e1 >= door1_depth * threshold_scale) valid_exit
  //               \ = true;\n        if (door2_depth > 0 && len_e2 >= door2_depth * threshold_scale)
  //               \ valid_exit = true;\n        if (!valid_exit) {\n          unsigned long
  //               \ hold_ms = (unsigned long) (id(assume_present_timeout_s).state * 1000.0f);\n
  //               \          if (hold_ms > 0) {\n            assumed_present_until = now_ms
  //               \ + hold_ms;\n          }\n        }\n        break;\n      }\n    }\n
  //               \  }\n}\n\nbool occ_now = any_detected_now;\nif (!occ_now && id(entry_exit_enabled).state)
  //               \ {\n  if (assumed_present_until != 0 && millis() < assumed_present_until)
  //               \ {\n    occ_now = true;\n  }\n}\nid(occupancy).publish_state(occ_now);\n
  //               bool hold_active = (assumed_present_until != 0 && millis() < assumed_present_until);\n
  //               id(assumed_present_active) = hold_active;\nid(assumed_present_until_ms)
  //               \ = assumed_present_until;\nid(assumed_present).publish_state(hold_active);\n
  //               if (hold_active) {\n  float remain = (assumed_present_until - millis())
  //               \ / 1000.0f;\n  if (remain < 0) remain = 0;\n  id(assumed_present_remaining_s).publish_state(remain);\n
  //               } else {\n  id(assumed_present_remaining_s).publish_state(0);\n}\nbool
  //               \ hold_active2 = (assumed_present_until != 0 && millis() < assumed_present_until);\n
  //               bool z1 = zone1_count > 0; if (hold_active2 && id(last_zone_hold) == 1)
  //               \ z1 = true;\nbool z2 = zone2_count > 0; if (hold_active2 && id(last_zone_hold)
  //               \ == 2) z2 = true;\nbool z3 = zone3_count > 0; if (hold_active2 && id(last_zone_hold)
  //               \ == 3) z3 = true;\nbool z4 = zone4_count > 0; if (hold_active2 && id(last_zone_hold)
  //               \ == 4) z4 = true;\nid(zone1_occupancy).publish_state(z1);\nid(zone2_occupancy).publish_state(z2);\n
  //               id(zone3_occupancy).publish_state(z3);\nid(zone4_occupancy).publish_state(z4);\n
  //               prev_detected[0] = p1_detected;\nprev_detected[1] = p2_detected;\nprev_detected[2]
  //               \ = p3_detected;"
  //             type_id: lambdaaction_id_12
  //         trigger_id: trigger_id_6
  //         automation_id: automation_id_18
  //     trigger_id: uart_uartdebugger_id
  //     dummy_receiver_id: uart_uartdummyreceiver_id
  //   rx_buffer_size: 256
  //   rx_timeout: 2
  uart_bus = new uart::IDFUARTComponent();
  uart_bus->set_component_source(LOG_STR("uart"));
  App.register_component(uart_bus);
  uart_bus->set_baud_rate(256000);
  esp32_esp32internalgpiopin_id_4 = new esp32::ESP32InternalGPIOPin();
  esp32_esp32internalgpiopin_id_4->set_pin(::GPIO_NUM_21);
  esp32_esp32internalgpiopin_id_4->set_drive_strength(::GPIO_DRIVE_CAP_2);
  esp32_esp32internalgpiopin_id_4->set_flags((gpio::Flags::FLAG_INPUT | gpio::Flags::FLAG_PULLUP));
  uart_bus->set_tx_pin(esp32_esp32internalgpiopin_id_4);
  esp32_esp32internalgpiopin_id_5 = new esp32::ESP32InternalGPIOPin();
  esp32_esp32internalgpiopin_id_5->set_pin(::GPIO_NUM_20);
  esp32_esp32internalgpiopin_id_5->set_drive_strength(::GPIO_DRIVE_CAP_2);
  esp32_esp32internalgpiopin_id_5->set_flags((gpio::Flags::FLAG_INPUT | gpio::Flags::FLAG_PULLUP));
  uart_bus->set_rx_pin(esp32_esp32internalgpiopin_id_5);
  uart_bus->set_rx_buffer_size(256);
  uart_bus->set_rx_full_threshold(120);
  uart_bus->set_rx_timeout(2);
  uart_bus->set_stop_bits(1);
  uart_bus->set_data_bits(8);
  uart_bus->set_parity(uart::UART_CONFIG_PARITY_NONE);
  uart_uartdebugger_id = new uart::UARTDebugger(uart_bus);
  uart_uartdebugger_id->set_component_source(LOG_STR("uart"));
  App.register_component(uart_uartdebugger_id);
  automation_id_18 = new Automation<uart::UARTDirection, std::vector<uint8_t>>(uart_uartdebugger_id);
  // esp32_ble_tracker:
  //   scan_parameters:
  //     active: true
  //     duration: 5min
  //     interval: 320ms
  //     window: 30ms
  //     continuous: true
  //   id: esp32_ble_tracker_esp32bletracker_id
  //   ble_id: esp32_ble_esp32ble_id
  //   software_coexistence: true
  esp32_ble_tracker_esp32bletracker_id = new esp32_ble_tracker::ESP32BLETracker();
  esp32_ble_tracker_esp32bletracker_id->set_component_source(LOG_STR("esp32_ble_tracker"));
  App.register_component(esp32_ble_tracker_esp32bletracker_id);
  // bluetooth_proxy:
  //   active: true
  //   id: bluetooth_proxy_bluetoothproxy_id
  //   cache_services: true
  //   connection_slots: 3
  //   esp32_ble_id: esp32_ble_tracker_esp32bletracker_id
  //   connections:
  //     - esp32_ble_id: esp32_ble_tracker_esp32bletracker_id
  //       id: bluetooth_proxy_bluetoothconnection_id
  //     - esp32_ble_id: esp32_ble_tracker_esp32bletracker_id
  //       id: bluetooth_proxy_bluetoothconnection_id_2
  //     - esp32_ble_id: esp32_ble_tracker_esp32bletracker_id
  //       id: bluetooth_proxy_bluetoothconnection_id_3
  bluetooth_proxy_bluetoothproxy_id = new bluetooth_proxy::BluetoothProxy();
  bluetooth_proxy_bluetoothproxy_id->set_component_source(LOG_STR("bluetooth_proxy"));
  App.register_component(bluetooth_proxy_bluetoothproxy_id);
  bluetooth_proxy_bluetoothproxy_id->set_active(true);
  esp32_ble_tracker_esp32bletracker_id->register_listener(bluetooth_proxy_bluetoothproxy_id);
  bluetooth_proxy_bluetoothconnection_id = new bluetooth_proxy::BluetoothConnection();
  bluetooth_proxy_bluetoothconnection_id->set_component_source(LOG_STR("bluetooth_proxy"));
  App.register_component(bluetooth_proxy_bluetoothconnection_id);
  bluetooth_proxy_bluetoothproxy_id->register_connection(bluetooth_proxy_bluetoothconnection_id);
  esp32_ble_tracker_esp32bletracker_id->register_client(bluetooth_proxy_bluetoothconnection_id);
  bluetooth_proxy_bluetoothconnection_id_2 = new bluetooth_proxy::BluetoothConnection();
  bluetooth_proxy_bluetoothconnection_id_2->set_component_source(LOG_STR("bluetooth_proxy"));
  App.register_component(bluetooth_proxy_bluetoothconnection_id_2);
  bluetooth_proxy_bluetoothproxy_id->register_connection(bluetooth_proxy_bluetoothconnection_id_2);
  esp32_ble_tracker_esp32bletracker_id->register_client(bluetooth_proxy_bluetoothconnection_id_2);
  bluetooth_proxy_bluetoothconnection_id_3 = new bluetooth_proxy::BluetoothConnection();
  bluetooth_proxy_bluetoothconnection_id_3->set_component_source(LOG_STR("bluetooth_proxy"));
  App.register_component(bluetooth_proxy_bluetoothconnection_id_3);
  bluetooth_proxy_bluetoothproxy_id->register_connection(bluetooth_proxy_bluetoothconnection_id_3);
  esp32_ble_tracker_esp32bletracker_id->register_client(bluetooth_proxy_bluetoothconnection_id_3);
  // esp32_improv:
  //   authorizer: null
  //   id: esp32_improv_esp32improvcomponent_id
  //   identify_duration: 10s
  //   authorized_duration: 1min
  //   wifi_timeout: 90s
  esp32_improv_esp32improvcomponent_id = new esp32_improv::ESP32ImprovComponent();
  esp32_improv_esp32improvcomponent_id->set_component_source(LOG_STR("esp32_improv"));
  App.register_component(esp32_improv_esp32improvcomponent_id);
  esp32_improv_esp32improvcomponent_id->set_identify_duration(10000);
  esp32_improv_esp32improvcomponent_id->set_authorized_duration(60000);
  esp32_improv_esp32improvcomponent_id->set_wifi_timeout(90000);
  // update.http_request:
  //   platform: http_request
  //   id: update_http_request
  //   name: Everything Presence Lite Firmware
  //   source: https:everythingsmarthome.github.io/everything-presence-lite/everything-presence-lite-ha-manifest.json
  //   disabled_by_default: true
  //   entity_category: config
  //   ota_id: ota_http_request
  //   http_request_id: http_request_httprequestidf_id
  //   update_interval: 6h
  update_http_request = new http_request::HttpRequestUpdate();
  App.register_update(update_http_request);
  update_http_request->set_name("Everything Presence Lite Firmware", 712033875);
  update_http_request->set_disabled_by_default(true);
  update_http_request->set_entity_category(::ENTITY_CATEGORY_CONFIG);
  update_http_request->set_ota_parent(ota_http_request);
  update_http_request->set_request_parent(http_request_httprequestidf_id);
  update_http_request->set_source_url("https://everythingsmarthome.github.io/everything-presence-lite/everything-presence-lite-ha-manifest.json");
  update_http_request->set_update_interval(21600000);
  update_http_request->set_component_source(LOG_STR("http_request.update"));
  App.register_component(update_http_request);
  // dashboard_import:
  //   package_import_url: github:everythingsmarthome/everything-presence-lite/everything-presence-lite-ha.yaml@main
  //   import_full_config: false
  dashboard_import::set_package_import_url("github://everythingsmarthome/everything-presence-lite/everything-presence-lite-ha.yaml@main");
  // md5:
  // sha256:
  //   {}
  // socket:
  //   implementation: bsd_sockets
  // output:
  // esp32_ble:
  //   id: esp32_ble_esp32ble_id
  //   io_capability: none
  //   enable_on_boot: true
  //   advertising: false
  //   advertising_cycle_time: 10s
  //   disable_bt_logs: true
  //   connection_timeout: 20s
  //   max_notifications: 12
  //   max_connections: 3
  esp32_ble_esp32ble_id = new esp32_ble::ESP32BLE();
  esp32_ble_esp32ble_id->set_enable_on_boot(true);
  esp32_ble_esp32ble_id->set_io_capability(esp32_ble::IO_CAP_NONE);
  esp32_ble_esp32ble_id->set_advertising_cycle_time(10000);
  esp32_ble_esp32ble_id->set_component_source(LOG_STR("esp32_ble"));
  App.register_component(esp32_ble_esp32ble_id);
  // esp32_ble_server:
  //   id: esp32_ble_server_bleserver_id
  //   ble_id: esp32_ble_esp32ble_id
  //   appearance: 0
  //   services:
  //     - uuid: 0x180A
  //       characteristics:
  //         - uuid: 0x2A29
  //           read: true
  //           value:
  //             data: ESPHome
  //             string_encoding: utf_8
  //             endianness: LITTLE
  //           id: esp32_ble_server_blecharacteristic_id
  //           char_value_action_id_: esp32_ble_server_esp32_ble_server_automations_blecharacteristicsetvalueaction_id
  //           descriptors: []
  //           write: false
  //           notify: false
  //           broadcast: false
  //           indicate: false
  //           write_no_response: false
  //         - uuid: 0x2A24
  //           read: true
  //           value:
  //             data: EverythingSmartTechnology.Everything Presence Lite
  //             string_encoding: utf_8
  //             endianness: LITTLE
  //           id: esp32_ble_server_blecharacteristic_id_2
  //           char_value_action_id_: esp32_ble_server_esp32_ble_server_automations_blecharacteristicsetvalueaction_id_2
  //           descriptors: []
  //           write: false
  //           notify: false
  //           broadcast: false
  //           indicate: false
  //           write_no_response: false
  //         - uuid: 0x2A26
  //           read: true
  //           value:
  //             data: 1.4.2
  //             string_encoding: utf_8
  //             endianness: LITTLE
  //           id: esp32_ble_server_blecharacteristic_id_3
  //           char_value_action_id_: esp32_ble_server_esp32_ble_server_automations_blecharacteristicsetvalueaction_id_3
  //           descriptors: []
  //           write: false
  //           notify: false
  //           broadcast: false
  //           indicate: false
  //           write_no_response: false
  //       id: esp32_ble_server_bleservice_id
  //       advertise: false
  esp32_ble_server_bleserver_id = new esp32_ble_server::BLEServer();
  esp32_ble_server_bleserver_id->set_component_source(LOG_STR("esp32_ble_server"));
  App.register_component(esp32_ble_server_bleserver_id);
  esp32_ble_esp32ble_id->register_gatts_event_handler(esp32_ble_server_bleserver_id);
  esp32_ble_esp32ble_id->register_ble_status_event_handler(esp32_ble_server_bleserver_id);
  esp32_ble_server_bleserver_id->set_parent(esp32_ble_esp32ble_id);
  esp32_ble_esp32ble_id->advertising_set_appearance(0);
  esp32_ble_server_bleservice_id = esp32_ble_server_bleserver_id->create_service(esp32_ble::ESPBTUUID::from_uint32(0x180A), false, 7);
  esp32_ble_server_blecharacteristic_id = esp32_ble_server_bleservice_id->create_characteristic(esp32_ble::ESPBTUUID::from_uint32(0x2A29), (0 + esp32_ble_server::BLECharacteristic::PROPERTY_READ));
  esp32_ble_server_blecharacteristic_id->set_value({69, 83, 80, 72, 111, 109, 101});
  esp32_ble_server_blecharacteristic_id_2 = esp32_ble_server_bleservice_id->create_characteristic(esp32_ble::ESPBTUUID::from_uint32(0x2A24), (0 + esp32_ble_server::BLECharacteristic::PROPERTY_READ));
  esp32_ble_server_blecharacteristic_id_2->set_value({69, 118, 101, 114, 121, 116, 104, 105, 110, 103, 83, 109, 97, 114, 116, 84, 101, 99, 104, 110, 111, 108, 111, 103, 121, 46, 69, 118, 101, 114, 121, 116, 104, 105, 110, 103, 32, 80, 114, 101, 115, 101, 110, 99, 101, 32, 76, 105, 116, 101});
  esp32_ble_server_blecharacteristic_id_3 = esp32_ble_server_bleservice_id->create_characteristic(esp32_ble::ESPBTUUID::from_uint32(0x2A26), (0 + esp32_ble_server::BLECharacteristic::PROPERTY_READ));
  esp32_ble_server_blecharacteristic_id_3->set_value({49, 46, 52, 46, 50});
  esp32_ble_server_bleserver_id->set_device_information_service(esp32_ble_server_bleservice_id);
  lambdaaction_id = new StatelessLambdaAction<>([]() -> void {
      #line 13 "common/everything-presence-lite-base.yaml"
      if (std::string("true") == "true") {
        firmware_ble->publish_state("Enabled");
      } else {
        firmware_ble->publish_state("Disabled");
      }
      
      if (std::string("false") == "true") {
        firmware_co2->publish_state("Enabled");
      } else {
        firmware_co2->publish_state("Disabled");
      }
  });
  button_pressaction_id = new button::PressAction<>(get_mmwave_firmware);
  binary_sensor_binarysensorpublishaction_id = new binary_sensor::BinarySensorPublishAction<>(zone1_occupancy);
  binary_sensor_binarysensorpublishaction_id->set_state(false);
  binary_sensor_binarysensorpublishaction_id_2 = new binary_sensor::BinarySensorPublishAction<>(zone2_occupancy);
  binary_sensor_binarysensorpublishaction_id_2->set_state(false);
  binary_sensor_binarysensorpublishaction_id_3 = new binary_sensor::BinarySensorPublishAction<>(zone3_occupancy);
  binary_sensor_binarysensorpublishaction_id_3->set_state(false);
  binary_sensor_binarysensorpublishaction_id_4 = new binary_sensor::BinarySensorPublishAction<>(zone4_occupancy);
  binary_sensor_binarysensorpublishaction_id_4->set_state(false);
  automation_id->add_actions({lambdaaction_id, button_pressaction_id, binary_sensor_binarysensorpublishaction_id, binary_sensor_binarysensorpublishaction_id_2, binary_sensor_binarysensorpublishaction_id_3, binary_sensor_binarysensorpublishaction_id_4});
  lambdaaction_id_3 = new StatelessLambdaAction<float>([](float x) -> void {
      #line 142 "common/everything-presence-lite-base.yaml"
      illuminance_sensor->update();
  });
  automation_id_4->add_actions({lambdaaction_id_3});
  button_pressaction_id_2 = new button::PressAction<>(factory_reset_button);
  automation_id_5->add_actions({repeataction_id, light_lightcontrolaction_id_3, button_pressaction_id_2});
  lambdaaction_id_2 = new StatelessLambdaAction<std::string>([](std::string url) -> void {
      #line 44 "common/everything-presence-lite-base.yaml"
      ESP_LOGI("fw", "Setting update manifest URL: %s", url.c_str());
      update_http_request->set_source_url(url);
  });
  updatecomponentaction_id = new UpdateComponentAction<std::string>(update_http_request);
  delayaction_id = new DelayAction<std::string>();
  delayaction_id->set_component_source(LOG_STR("api"));
  App.register_component(delayaction_id);
  delayaction_id->set_delay(1000);
  update_performaction_id = new update::PerformAction<std::string>();
  update_performaction_id->set_parent(update_http_request);
  update_performaction_id->set_force(true);
  automation_id_2->add_actions({lambdaaction_id_2, updatecomponentaction_id, delayaction_id, update_performaction_id});
  api_userservicetrigger_id_2 = new api::UserServiceTrigger<api::enums::SUPPORTS_RESPONSE_OPTIONAL>("get_build_flags", {});
  automation_id_3 = new Automation<uint32_t, bool>(api_userservicetrigger_id_2);
  api_apirespondaction_id = new api::APIRespondAction<uint32_t, bool>(api_apiserver_id);
  api_apirespondaction_id->set_is_optional_mode(true);
  api_apirespondaction_id->set_success(true);
  api_apirespondaction_id->set_error_message("");
  api_apirespondaction_id->set_data([](uint32_t call_id, bool return_response, ArduinoJson::JsonObject root) -> void {
      #line 55 "common/everything-presence-lite-base.yaml"
      root["ethernet_enabled"]  = false;
      root["co2_enabled"]       = false;
      root["bluetooth_enabled"] = true;
      root["board_revision"]    = "1.2";
      root["sensor_variant"]    = "ld2450";
      root["firmware_channel"]  = "stable";
      root["model"]             = "everything-presence-lite";
  });
  automation_id_3->add_actions({api_apirespondaction_id});
  api_userservicetrigger_id_2__unregister = new api::APIUnregisterServiceCallAction<uint32_t, bool>(api_apiserver_id);
  automation_id_3->add_actions({api_userservicetrigger_id_2__unregister});
  api_apiserver_id->initialize_user_services({api_userservicetrigger_id, api_userservicetrigger_id_2});
  ota_http_request->set_parent(http_request_httprequestidf_id);
  lambdaaction_id_5 = new StatelessLambdaAction<>([]() -> void {
      #line 198 "common/everything-presence-lite-base.yaml"
      std::string base_url = "https://everythingsmarthome.github.io/everything-presence-lite/everything-presence-lite-ha";
      std::string variant = "ld2450";
      if (variant == "ld2450") {
        variant.clear();
      }
      
      if (!variant.empty()) {
        base_url += "-";
        base_url += variant;
      }
      
      if (firmware_ble->state == "Disabled") {
        base_url += "-no-ble";
      }
      
      if (firmware_co2->state == "Enabled") {
        base_url += "-co2";
      }
      
      base_url += "-manifest.json";
      
      ESP_LOGI("firmware", "Switching to manifest: %s", base_url.c_str());
      update_http_request->set_source_url(base_url.c_str());
  });
  updatecomponentaction_id_2 = new UpdateComponentAction<>(update_http_request);
  delayaction_id_4 = new DelayAction<>();
  delayaction_id_4->set_component_source(LOG_STR("button"));
  App.register_component(delayaction_id_4);
  delayaction_id_4->set_delay(2000);
  update_performaction_id_2 = new update::PerformAction<>();
  update_performaction_id_2->set_parent(update_http_request);
  update_performaction_id_2->set_force(true);
  automation_id_6->add_actions({lambdaaction_id_4, lambdaaction_id_5, updatecomponentaction_id_2, delayaction_id_4, update_performaction_id_2});
  switch__turnonaction_id = new switch_::TurnOnAction<>(mmwave_configuration);
  delayaction_id_5 = new DelayAction<>();
  delayaction_id_5->set_component_source(LOG_STR("button"));
  App.register_component(delayaction_id_5);
  delayaction_id_5->set_delay(1000);
  uart_uartwriteaction_id = new uart::UARTWriteAction<>();
  uart_uartwriteaction_id->set_parent(uart_bus);
  static const uint8_t uart_uartwriteaction_id_data[] = {0xFD, 0xFC, 0xFB, 0xFA, 0x02, 0x00, 0xA0, 0x00, 0x04, 0x03, 0x02, 0x01};
  uart_uartwriteaction_id->set_data_static(uart_uartwriteaction_id_data, 12);
  lambdaaction_id_6 = new StatelessLambdaAction<>([]() -> void {
      #line 108 "common/ld2450-base.yaml"
      uint8_t response[20];
      if (uart_bus->read_array(response, 20)) {
        int firmware_major = response[13];
        int firmware_minor = response[12];
        char firmware_version_str[32];
        sprintf(firmware_version_str, "V%d.%02d", firmware_major, firmware_minor);
        firmware_version->publish_state(std::string(firmware_version_str));
      } else {
        firmware_version->publish_state("Unknown");
      }
  });
  switch__turnoffaction_id = new switch_::TurnOffAction<>(mmwave_configuration);
  delayaction_id_6 = new DelayAction<>();
  delayaction_id_6->set_component_source(LOG_STR("button"));
  App.register_component(delayaction_id_6);
  delayaction_id_6->set_delay(1000);
  automation_id_7->add_actions({switch__turnonaction_id, delayaction_id_5, uart_uartwriteaction_id, lambdaaction_id_6, switch__turnoffaction_id, delayaction_id_6});
  switch__turnonaction_id_2 = new switch_::TurnOnAction<>(mmwave_configuration);
  delayaction_id_7 = new DelayAction<>();
  delayaction_id_7->set_component_source(LOG_STR("button"));
  App.register_component(delayaction_id_7);
  delayaction_id_7->set_delay(1000);
  uart_uartwriteaction_id_2 = new uart::UARTWriteAction<>();
  uart_uartwriteaction_id_2->set_parent(uart_bus);
  static const uint8_t uart_uartwriteaction_id_2_data[] = {0xFD, 0xFC, 0xFB, 0xFA, 0x02, 0x00, 0xA3, 0x00, 0x04, 0x03, 0x02, 0x01};
  uart_uartwriteaction_id_2->set_data_static(uart_uartwriteaction_id_2_data, 12);
  automation_id_8->add_actions({switch__turnonaction_id_2, delayaction_id_7, uart_uartwriteaction_id_2});
  switch__turnonaction_id_3 = new switch_::TurnOnAction<>(mmwave_configuration);
  delayaction_id_8 = new DelayAction<>();
  delayaction_id_8->set_component_source(LOG_STR("button"));
  App.register_component(delayaction_id_8);
  delayaction_id_8->set_delay(2000);
  uart_uartwriteaction_id_3 = new uart::UARTWriteAction<>();
  uart_uartwriteaction_id_3->set_parent(uart_bus);
  static const uint8_t uart_uartwriteaction_id_3_data[] = {0xFD, 0xFC, 0xFB, 0xFA, 0x02, 0x00, 0xA2, 0x00, 0x04, 0x03, 0x02, 0x01};
  uart_uartwriteaction_id_3->set_data_static(uart_uartwriteaction_id_3_data, 12);
  delayaction_id_9 = new DelayAction<>();
  delayaction_id_9->set_component_source(LOG_STR("button"));
  App.register_component(delayaction_id_9);
  delayaction_id_9->set_delay(2000);
  switch__turnoffaction_id_2 = new switch_::TurnOffAction<>(mmwave_configuration);
  delayaction_id_10 = new DelayAction<>();
  delayaction_id_10->set_component_source(LOG_STR("button"));
  App.register_component(delayaction_id_10);
  delayaction_id_10->set_delay(2000);
  button_pressaction_id_3 = new button::PressAction<>(reboot_mmwave_sensor);
  automation_id_9->add_actions({lambdaaction_id_7, switch__turnonaction_id_3, delayaction_id_8, uart_uartwriteaction_id_3, delayaction_id_9, switch__turnoffaction_id_2, delayaction_id_10, button_pressaction_id_3});
  uart_uartwriteaction_id_5->set_parent(uart_bus);
  static const uint8_t uart_uartwriteaction_id_5_data[] = {0xFD, 0xFC, 0xFB, 0xFA, 0x02, 0x00, 0xFE, 0x00, 0x04, 0x03, 0x02, 0x01};
  uart_uartwriteaction_id_5->set_data_static(uart_uartwriteaction_id_5_data, 12);
  automation_id_15->add_actions({uart_uartwriteaction_id_5});
  automation_id_14 = new Automation<>(mmwave_configuration->get_turn_on_trigger());
  uart_uartwriteaction_id_4 = new uart::UARTWriteAction<>();
  uart_uartwriteaction_id_4->set_parent(uart_bus);
  static const uint8_t uart_uartwriteaction_id_4_data[] = {0xFD, 0xFC, 0xFB, 0xFA, 0x04, 0x00, 0xFF, 0x00, 0x01, 0x00, 0x04, 0x03, 0x02, 0x01};
  uart_uartwriteaction_id_4->set_data_static(uart_uartwriteaction_id_4_data, 14);
  automation_id_14->add_actions({uart_uartwriteaction_id_4});
  mmwave_configuration->set_optimistic(true);
  mmwave_configuration->set_assumed_state(false);
  uart_uartwriteaction_id_7->set_parent(uart_bus);
  static const uint8_t uart_uartwriteaction_id_7_data[] = {0xFD, 0xFC, 0xFB, 0xFA, 0x04, 0x00, 0xA4, 0x00, 0x00, 0x00, 0x04, 0x03, 0x02, 0x01};
  uart_uartwriteaction_id_7->set_data_static(uart_uartwriteaction_id_7_data, 14);
  delayaction_id_15 = new DelayAction<>();
  delayaction_id_15->set_component_source(LOG_STR("template.switch"));
  App.register_component(delayaction_id_15);
  delayaction_id_15->set_delay(2000);
  button_pressaction_id_5 = new button::PressAction<>(reboot_mmwave_sensor);
  delayaction_id_16 = new DelayAction<>();
  delayaction_id_16->set_component_source(LOG_STR("template.switch"));
  App.register_component(delayaction_id_16);
  delayaction_id_16->set_delay(2000);
  switch__turnoffaction_id_4 = new switch_::TurnOffAction<>(mmwave_configuration);
  automation_id_17->add_actions({switch__turnonaction_id_5, delayaction_id_14, uart_uartwriteaction_id_7, delayaction_id_15, button_pressaction_id_5, delayaction_id_16, switch__turnoffaction_id_4});
  automation_id_16 = new Automation<>(bluetooth_switch->get_turn_on_trigger());
  switch__turnonaction_id_4 = new switch_::TurnOnAction<>(mmwave_configuration);
  delayaction_id_11 = new DelayAction<>();
  delayaction_id_11->set_component_source(LOG_STR("template.switch"));
  App.register_component(delayaction_id_11);
  delayaction_id_11->set_delay(2000);
  uart_uartwriteaction_id_6 = new uart::UARTWriteAction<>();
  uart_uartwriteaction_id_6->set_parent(uart_bus);
  static const uint8_t uart_uartwriteaction_id_6_data[] = {0xFD, 0xFC, 0xFB, 0xFA, 0x04, 0x00, 0xA4, 0x00, 0x01, 0x00, 0x04, 0x03, 0x02, 0x01};
  uart_uartwriteaction_id_6->set_data_static(uart_uartwriteaction_id_6_data, 14);
  delayaction_id_12 = new DelayAction<>();
  delayaction_id_12->set_component_source(LOG_STR("template.switch"));
  App.register_component(delayaction_id_12);
  delayaction_id_12->set_delay(2000);
  button_pressaction_id_4 = new button::PressAction<>(reboot_mmwave_sensor);
  delayaction_id_13 = new DelayAction<>();
  delayaction_id_13->set_component_source(LOG_STR("template.switch"));
  App.register_component(delayaction_id_13);
  delayaction_id_13->set_delay(2000);
  switch__turnoffaction_id_3 = new switch_::TurnOffAction<>(mmwave_configuration);
  automation_id_16->add_actions({switch__turnonaction_id_4, delayaction_id_11, uart_uartwriteaction_id_6, delayaction_id_12, button_pressaction_id_4, delayaction_id_13, switch__turnoffaction_id_3});
  bluetooth_switch->set_optimistic(true);
  bluetooth_switch->set_assumed_state(false);
  esp32_ble_esp32ble_id->register_gap_event_handler(esp32_ble_tracker_esp32bletracker_id);
  esp32_ble_esp32ble_id->register_gap_scan_event_handler(esp32_ble_tracker_esp32bletracker_id);
  esp32_ble_esp32ble_id->register_gattc_event_handler(esp32_ble_tracker_esp32bletracker_id);
  esp32_ble_esp32ble_id->register_ble_status_event_handler(esp32_ble_tracker_esp32bletracker_id);
  esp32_ble_tracker_esp32bletracker_id->set_parent(esp32_ble_esp32ble_id);
  esp32_ble_tracker_esp32bletracker_id->set_scan_duration(300);
  esp32_ble_tracker_esp32bletracker_id->set_scan_interval(512);
  esp32_ble_tracker_esp32bletracker_id->set_scan_window(48);
  esp32_ble_tracker_esp32bletracker_id->set_scan_active(true);
  esp32_ble_tracker_esp32bletracker_id->set_scan_continuous(true);
  // globals:
  //   id: mmwave_update_time
  //   type: unsigned long
  //   restore_value: false
  //   initial_value: '0'
  mmwave_update_time = new globals::GlobalsComponent<unsigned long>(0);
  mmwave_update_time->set_component_source(LOG_STR("globals"));
  App.register_component(mmwave_update_time);
  // globals:
  //   id: mmwave_update_interval
  //   type: unsigned long
  //   restore_value: false
  //   initial_value: '250'
  mmwave_update_interval = new globals::GlobalsComponent<unsigned long>(250);
  mmwave_update_interval->set_component_source(LOG_STR("globals"));
  App.register_component(mmwave_update_interval);
  // globals:
  //   id: target1_last_update
  //   type: unsigned long
  //   initial_value: '0'
  //   restore_value: false
  target1_last_update = new globals::GlobalsComponent<unsigned long>(0);
  target1_last_update->set_component_source(LOG_STR("globals"));
  App.register_component(target1_last_update);
  // globals:
  //   id: target1_reset
  //   type: int
  //   initial_value: '1'
  //   restore_value: false
  target1_reset = new globals::GlobalsComponent<int>(1);
  target1_reset->set_component_source(LOG_STR("globals"));
  App.register_component(target1_reset);
  // globals:
  //   id: entities_update_count
  //   type: unsigned int
  //   restore_value: false
  //   initial_value: '0'
  entities_update_count = new globals::GlobalsComponent<unsigned int>(0);
  entities_update_count->set_component_source(LOG_STR("globals"));
  App.register_component(entities_update_count);
  // globals:
  //   id: entities_update_max_count
  //   type: unsigned int
  //   restore_value: false
  //   initial_value: '0'
  entities_update_max_count = new globals::GlobalsComponent<unsigned int>(0);
  entities_update_max_count->set_component_source(LOG_STR("globals"));
  App.register_component(entities_update_max_count);
  // globals:
  //   id: extra_entities
  //   type: unsigned int
  //   restore_value: false
  //   initial_value: '0'
  extra_entities = new globals::GlobalsComponent<unsigned int>(0);
  extra_entities->set_component_source(LOG_STR("globals"));
  App.register_component(extra_entities);
  // globals:
  //   id: assumed_present_until_ms
  //   type: unsigned long
  //   restore_value: false
  //   initial_value: '0'
  assumed_present_until_ms = new globals::GlobalsComponent<unsigned long>(0);
  assumed_present_until_ms->set_component_source(LOG_STR("globals"));
  App.register_component(assumed_present_until_ms);
  // globals:
  //   id: assumed_present_active
  //   type: bool
  //   restore_value: false
  //   initial_value: 'false'
  assumed_present_active = new globals::GlobalsComponent<bool>(false);
  assumed_present_active->set_component_source(LOG_STR("globals"));
  App.register_component(assumed_present_active);
  // globals:
  //   id: last_zone_hold
  //   type: int
  //   restore_value: false
  //   initial_value: '0'
  last_zone_hold = new globals::GlobalsComponent<int>(0);
  last_zone_hold->set_component_source(LOG_STR("globals"));
  App.register_component(last_zone_hold);
  // globals:
  //   id: last_target_x_mm
  //   type: float
  //   restore_value: false
  //   initial_value: '0'
  last_target_x_mm = new globals::GlobalsComponent<float>(0);
  last_target_x_mm->set_component_source(LOG_STR("globals"));
  App.register_component(last_target_x_mm);
  // globals:
  //   id: last_target_y_mm
  //   type: float
  //   restore_value: false
  //   initial_value: '0'
  last_target_y_mm = new globals::GlobalsComponent<float>(0);
  last_target_y_mm->set_component_source(LOG_STR("globals"));
  App.register_component(last_target_y_mm);
  lambdaaction_id_11 = new StatelessLambdaAction<>([]() -> void {
      #line 73 "common/ld2450-base.yaml"
      unsigned long now = millis();
      unsigned long timeout_ms = (unsigned long)(aggressive_timeout->state * 1000);
      if (aggressive_target_clearing->state) {
        if ((now - target1_last_update->value()) > timeout_ms) {
          if (target1_reset->value() == 0) {
            if (target1_active->state == true) {
              ESP_LOGD("custom", "No update in 3s, clearing");
              reboot_mmwave_sensor->press();
              target1_reset->value() = 1;
            }
          }
        }
      }
  });
  automation_id_13->add_actions({lambdaaction_id_11});
  interval_intervaltrigger_id->set_update_interval(1000);
  interval_intervaltrigger_id->set_startup_delay(0);
  lambdaaction_id_12 = new StatelessLambdaAction<uart::UARTDirection, std::vector<uint8_t>>([](uart::UARTDirection direction, std::vector<uint8_t> bytes) -> void {
      #line 1166 "common/ld2450-base.yaml"
      if ((millis() - mmwave_update_time->value()) <= mmwave_update_interval->value()) { 
        return;
      };
      mmwave_update_time->value() = millis();
      
      if (bytes.size() != 30) {
        ESP_LOGW("LD2450", "Expected 30 bytes but received %hu!", bytes.size());
        return;
      }
      
       
       
      {
        auto *strip = rgb_strip->get_output();
        for (int i = 0; i < strip->size(); i++) {
          (*strip)[i] = light::ESPColor(0, 0, 0);
        }
        strip->schedule_show();
      }
      
      bool update_entities = false;
      if(extra_entities->value() != 0) {
        entities_update_count->value() += 1;
        update_entities = entities_update_count->value() >= entities_update_max_count->value();
        if (update_entities) {
          entities_update_count->value() = 0;
        }
      }
      
      const static float RADIANS_TO_DEGREES = 180.0 / 3.14159265358979323846;
      const static float DEGREES_TO_RADIANS = 3.14159265358979323846 / 180.0;
      const static int16_t MIN_INT16_VAL = -32768;
      
      float max_distance = float(distance->state) * 10;
      float installation_angle = installation_angle_ui->state * DEGREES_TO_RADIANS;
      
      static unsigned long assumed_present_until = 0;
      static bool prev_detected[3] = {false,false,false};
      const static int MAX_POLY_VERTICES = 20;
      
      struct ParsedPolygon {
        float vx[20];
        float vy[20];
        int count;
      };
      
      static ParsedPolygon poly_zones[4];
      static ParsedPolygon poly_exclusions[2];
      static ParsedPolygon poly_entries[2];
      static std::string last_poly_zone_text[4];
      static std::string last_poly_excl_text[2];
      static std::string last_poly_entry_text[2];
      static bool poly_initialized = false;
      
      auto parse_polygon_text = [](const std::string& text, ParsedPolygon& poly) {
        poly.count = 0;
        if (text.empty()) return;
      
        size_t pos = 0;
        while (pos < text.length() && poly.count < 20) {
          int x, y;
          int chars_read;
          if (sscanf(text.c_str() + pos, "%d:%d%n", &x, &y, &chars_read) == 2) {
            poly.vx[poly.count] = (float)x;
            poly.vy[poly.count] = (float)y;
            poly.count++;
            pos += chars_read;
            if (pos < text.length() && text[pos] == ';') pos++;
          } else {
            break;
          }
        }
      };
      
      auto point_in_poly = [](float px, float py, const ParsedPolygon& poly) -> bool {
        if (poly.count < 3) return false;
      
        bool inside = false;
        for (int i = 0, j = poly.count - 1; i < poly.count; j = i++) {
          float xi = poly.vx[i], yi = poly.vy[i];
          float xj = poly.vx[j], yj = poly.vy[j];
      
          if (((yi > py) != (yj > py)) &&
              (px < (xj - xi) * (py - yi) / (yj - yi) + xi)) {
            inside = !inside;
          }
        }
        return inside;
      };
      
      bool polygon_mode = polygon_zones_enabled->state;
      if (polygon_mode) {
        std::string z1_text = poly_zone_1->state;
        std::string z2_text = poly_zone_2->state;
        std::string z3_text = poly_zone_3->state;
        std::string z4_text = poly_zone_4->state;
        if (!poly_initialized || z1_text != last_poly_zone_text[0]) {
          parse_polygon_text(z1_text, poly_zones[0]);
          last_poly_zone_text[0] = z1_text;
        }
        if (!poly_initialized || z2_text != last_poly_zone_text[1]) {
          parse_polygon_text(z2_text, poly_zones[1]);
          last_poly_zone_text[1] = z2_text;
        }
        if (!poly_initialized || z3_text != last_poly_zone_text[2]) {
          parse_polygon_text(z3_text, poly_zones[2]);
          last_poly_zone_text[2] = z3_text;
        }
        if (!poly_initialized || z4_text != last_poly_zone_text[3]) {
          parse_polygon_text(z4_text, poly_zones[3]);
          last_poly_zone_text[3] = z4_text;
        }
      
        std::string e1_text = poly_exclusion_1->state;
        std::string e2_text = poly_exclusion_2->state;
        if (!poly_initialized || e1_text != last_poly_excl_text[0]) {
          parse_polygon_text(e1_text, poly_exclusions[0]);
          last_poly_excl_text[0] = e1_text;
        }
        if (!poly_initialized || e2_text != last_poly_excl_text[1]) {
          parse_polygon_text(e2_text, poly_exclusions[1]);
          last_poly_excl_text[1] = e2_text;
        }
      
        std::string en1_text = poly_entry_1->state;
        std::string en2_text = poly_entry_2->state;
        if (!poly_initialized || en1_text != last_poly_entry_text[0]) {
          parse_polygon_text(en1_text, poly_entries[0]);
          last_poly_entry_text[0] = en1_text;
        }
        if (!poly_initialized || en2_text != last_poly_entry_text[1]) {
          parse_polygon_text(en2_text, poly_entries[1]);
          last_poly_entry_text[1] = en2_text;
        }
      
        poly_initialized = true;
      }
      
       
      int zone1_count = 0;
      int zone1_begin_x_value = min(zone1_begin_x->state, zone1_end_x->state);
      int zone1_end_x_value = max(zone1_begin_x->state, zone1_end_x->state);
      int zone1_begin_y_value = min(zone1_begin_y->state, zone1_end_y->state);
      int zone1_end_y_value = max(zone1_begin_y->state, zone1_end_y->state);
      
      int zone2_count = 0;
      int zone2_begin_x_value = min(zone2_begin_x->state, zone2_end_x->state);
      int zone2_end_x_value = max(zone2_begin_x->state, zone2_end_x->state);
      int zone2_begin_y_value = min(zone2_begin_y->state, zone2_end_y->state);
      int zone2_end_y_value = max(zone2_begin_y->state, zone2_end_y->state);
      
      int zone3_count = 0;
      int zone3_begin_x_value = min(zone3_begin_x->state, zone3_end_x->state);
      int zone3_end_x_value = max(zone3_begin_x->state, zone3_end_x->state);
      int zone3_begin_y_value = min(zone3_begin_y->state, zone3_end_y->state);
      int zone3_end_y_value = max(zone3_begin_y->state, zone3_end_y->state);
      
      int zone4_count = 0;
      int zone4_begin_x_value = min(zone4_begin_x->state, zone4_end_x->state);
      int zone4_end_x_value = max(zone4_begin_x->state, zone4_end_x->state);
      int zone4_begin_y_value = min(zone4_begin_y->state, zone4_end_y->state);
      int zone4_end_y_value = max(zone4_begin_y->state, zone4_end_y->state);
      
      int occupancy_mask_1_count = 0;
      int occupancy_mask_1_begin_x_value = min(occupancy_mask_1_begin_x->state, occupancy_mask_1_end_x->state);
      int occupancy_mask_1_end_x_value = max(occupancy_mask_1_begin_x->state, occupancy_mask_1_end_x->state);
      int occupancy_mask_1_begin_y_value = min(occupancy_mask_1_begin_y->state, occupancy_mask_1_end_y->state);
      int occupancy_mask_1_end_y_value = max(occupancy_mask_1_begin_y->state, occupancy_mask_1_end_y->state);
      int occupancy_mask_2_count = 0;
      int occupancy_mask_2_begin_x_value = min(occupancy_mask_2_begin_x->state, occupancy_mask_2_end_x->state);
      int occupancy_mask_2_end_x_value = max(occupancy_mask_2_begin_x->state, occupancy_mask_2_end_x->state);
      int occupancy_mask_2_begin_y_value = min(occupancy_mask_2_begin_y->state, occupancy_mask_2_end_y->state);
      int occupancy_mask_2_end_y_value = max(occupancy_mask_2_begin_y->state, occupancy_mask_2_end_y->state);
      
      bool p1_detected = *((uint16_t *)(&bytes[10])) != 0;
      bool p2_detected = *((uint16_t *)(&bytes[18])) != 0;
      bool p3_detected = *((uint16_t *)(&bytes[26])) != 0;
      bool target_masked = false;
      
      if (p1_detected) {
        int16_t p1_x = *((int16_t *)(&bytes[4]));
        if (p1_x < 0) p1_x += MIN_INT16_VAL;
        else p1_x = -p1_x;
      
        int16_t p1_y = *((int16_t *)(&bytes[6]));
        if (p1_y < 0) p1_y += MIN_INT16_VAL;
        else p1_y = -p1_y;
      
        float p1_distance = sqrt(p1_x * p1_x + p1_y * p1_y);
        
        if (inverse_mounting->state) {
          p1_x = -p1_x;
        }
        
        if (p1_distance > max_distance) {
          p1_detected = false;
        } else {
          float p1_angle;
          if (installation_angle != 0 || (update_entities && extra_entities->value() >= 4)) {
            p1_angle = atan2(p1_y, p1_x);
          }
          if (installation_angle != 0) {
            float angle = p1_angle - installation_angle;
            p1_x = p1_distance * cos(angle);
            p1_y = p1_distance * sin(angle);
          }
          if (polygon_mode) {
            if (point_in_poly(p1_x, p1_y, poly_exclusions[0])) {
              occupancy_mask_1_count++;
              p1_detected = false;
              target_masked = true;
            } else if (point_in_poly(p1_x, p1_y, poly_exclusions[1])) {
              occupancy_mask_2_count++;
              p1_detected = false;
              target_masked = true;
            } else {
              if (point_in_poly(p1_x, p1_y, poly_zones[0])) {
                zone1_count++;
                last_zone_hold->value() = 1;
              }
              if (point_in_poly(p1_x, p1_y, poly_zones[1])) {
                zone2_count++;
                last_zone_hold->value() = 2;
              }
              if (point_in_poly(p1_x, p1_y, poly_zones[2])) {
                zone3_count++;
                last_zone_hold->value() = 3;
              }
              if (point_in_poly(p1_x, p1_y, poly_zones[3])) {
                zone4_count++;
                last_zone_hold->value() = 4;
              }
            }
          } else {
            if ((occupancy_mask_1_begin_x_value <= p1_x && p1_x <= occupancy_mask_1_end_x_value) &&
                (occupancy_mask_1_begin_y_value <= p1_y && p1_y <= occupancy_mask_1_end_y_value)) {
              occupancy_mask_1_count++;
              p1_detected = false;
              target_masked = true;
            } else if ((occupancy_mask_2_begin_x_value <= p1_x && p1_x <= occupancy_mask_2_end_x_value) &&
                (occupancy_mask_2_begin_y_value <= p1_y && p1_y <= occupancy_mask_2_end_y_value)) {
              occupancy_mask_2_count++;
              p1_detected = false;
              target_masked = true;
            } else {
              if ((zone1_begin_x_value <= p1_x && p1_x <= zone1_end_x_value) &&
                  (zone1_begin_y_value <= p1_y && p1_y <= zone1_end_y_value)) {
                zone1_count++;
                last_zone_hold->value() = 1;
              }
              if ((zone2_begin_x_value <= p1_x && p1_x <= zone2_end_x_value) &&
                  (zone2_begin_y_value <= p1_y && p1_y <= zone2_end_y_value)) {
                zone2_count++;
                last_zone_hold->value() = 2;
              }
              if ((zone3_begin_x_value <= p1_x && p1_x <= zone3_end_x_value) &&
                  (zone3_begin_y_value <= p1_y && p1_y <= zone3_end_y_value)) {
                zone3_count++;
                last_zone_hold->value() = 3;
              }
              if ((zone4_begin_x_value <= p1_x && p1_x <= zone4_end_x_value) &&
                  (zone4_begin_y_value <= p1_y && p1_y <= zone4_end_y_value)) {
                zone4_count++;
                last_zone_hold->value() = 4;
              }
            }
          }
          if (update_entities) {
            switch (extra_entities->value()) {
              case 5:
                {
                  uint16_t p1_resolution = *((uint16_t *)(&bytes[10]));
                  int16_t p1_speed = *((int16_t *)(&bytes[8]));
                  if (p1_speed < 0) p1_speed += MIN_INT16_VAL;
                  else p1_speed = -p1_speed;
                  float p1_speed_float = p1_speed / 100.0;
      
                  if (target1_speed->state != p1_speed_float) {
                    target1_speed->publish_state(p1_speed_float);
                  }
                  if (target1_resolution->state != p1_resolution) {
                    target1_resolution->publish_state(p1_resolution);
                  }
                }
              case 4:
                p1_angle = (p1_angle * RADIANS_TO_DEGREES) - 90;
      
                if (target1_angle->state != p1_angle) {
                  target1_angle->publish_state(p1_angle);
                }
                if (target1_distance->state != p1_distance) {
                  target1_distance->publish_state(p1_distance);
                }
              case 3:
                target1_active->publish_state(true);
              case 2:
              case 1:
                if (target1_x->state != p1_x) {
                  target1_x->publish_state(p1_x);
                }
                if (target1_y->state != p1_y) {
                  target1_y->publish_state(p1_y);
                }
                last_target_x_mm->value() = p1_x;
                last_target_y_mm->value() = p1_y;
            }
          }
        }
      }
      
      bool any_now = p1_detected || p2_detected || p3_detected;
      if (update_entities && !p1_detected && !target_masked) {
        bool preventClear = entry_exit_enabled->state && !any_now && prev_detected[0];
        switch (extra_entities->value()) {
          case 5:
            if (!(assumed_present_until != 0 && millis() < assumed_present_until) && !preventClear) {
              if (target1_speed->state != 0) {
                target1_speed->publish_state(0);
              }
              if (target1_resolution->state != 0) {
                target1_resolution->publish_state(0);
              }
            }
          case 4:
            if (!(assumed_present_until != 0 && millis() < assumed_present_until) && !preventClear) {
              if (target1_distance->state != 0) {
                target1_distance->publish_state(0);
              }
              if (target1_angle->state != 0) {
                target1_angle->publish_state(0);
              }
            }
          case 3:
            if (!(assumed_present_until != 0 && millis() < assumed_present_until) && !preventClear) {
              target1_active->publish_state(false);
            }
          case 2:
          case 1:
            if (!(assumed_present_until != 0 && millis() < assumed_present_until) && !preventClear) {
              if (target1_x->state != 0) {
                target1_x->publish_state(0);
              }
              if (target1_y->state != 0) {
                target1_y->publish_state(0);
              }
            }
        }
      }
      
      target_masked = false;
      
      if (p2_detected) {
        int16_t p2_x = *((int16_t *)(&bytes[12]));
        if (p2_x < 0) p2_x += MIN_INT16_VAL;
        else p2_x = -p2_x;
      
        int16_t p2_y = *((int16_t *)(&bytes[14]));
        if (p2_y < 0) p2_y += MIN_INT16_VAL;
        else p2_y = -p2_y;
      
        float p2_distance = sqrt(p2_x * p2_x + p2_y * p2_y);
        
        if (inverse_mounting->state) {
          p2_x = -p2_x;
        }
        
        if (p2_distance > max_distance) {
          p2_detected = false;
        } else {
          float p2_angle;
          if (installation_angle != 0 || (update_entities && extra_entities->value() >= 4)) {
            p2_angle = atan2(p2_y, p2_x);
          }
          if (installation_angle != 0) {
            float angle = p2_angle - installation_angle;
            p2_x = p2_distance * cos(angle);
            p2_y = p2_distance * sin(angle);
          }
          if (polygon_mode) {
            if (point_in_poly(p2_x, p2_y, poly_exclusions[0])) {
              occupancy_mask_1_count++;
              p2_detected = false;
              target_masked = true;
            } else if (point_in_poly(p2_x, p2_y, poly_exclusions[1])) {
              occupancy_mask_2_count++;
              p2_detected = false;
              target_masked = true;
            } else {
              if (point_in_poly(p2_x, p2_y, poly_zones[0])) { zone1_count++; last_zone_hold->value() = 1; }
              if (point_in_poly(p2_x, p2_y, poly_zones[1])) { zone2_count++; last_zone_hold->value() = 2; }
              if (point_in_poly(p2_x, p2_y, poly_zones[2])) { zone3_count++; last_zone_hold->value() = 3; }
              if (point_in_poly(p2_x, p2_y, poly_zones[3])) { zone4_count++; last_zone_hold->value() = 4; }
            }
          } else {
            if ((occupancy_mask_1_begin_x_value <= p2_x && p2_x <= occupancy_mask_1_end_x_value) &&
                (occupancy_mask_1_begin_y_value <= p2_y && p2_y <= occupancy_mask_1_end_y_value)) {
              occupancy_mask_1_count++;
              p2_detected = false;
              target_masked = true;
            } else if ((occupancy_mask_2_begin_x_value <= p2_x && p2_x <= occupancy_mask_2_end_x_value) &&
                (occupancy_mask_2_begin_y_value <= p2_y && p2_y <= occupancy_mask_2_end_y_value)) {
              occupancy_mask_2_count++;
              p2_detected = false;
              target_masked = true;
            } else {
              if ((zone1_begin_x_value <= p2_x && p2_x <= zone1_end_x_value) &&
                  (zone1_begin_y_value <= p2_y && p2_y <= zone1_end_y_value)) {
                zone1_count++;
                last_zone_hold->value() = 1;
              }
              if ((zone2_begin_x_value <= p2_x && p2_x <= zone2_end_x_value) &&
                  (zone2_begin_y_value <= p2_y && p2_y <= zone2_end_y_value)) {
                zone2_count++;
                last_zone_hold->value() = 2;
              }
              if ((zone3_begin_x_value <= p2_x && p2_x <= zone3_end_x_value) &&
                  (zone3_begin_y_value <= p2_y && p2_y <= zone3_end_y_value)) {
                zone3_count++;
                last_zone_hold->value() = 3;
              }
              if ((zone4_begin_x_value <= p2_x && p2_x <= zone4_end_x_value) &&
                  (zone4_begin_y_value <= p2_y && p2_y <= zone4_end_y_value)) {
                zone4_count++;
                last_zone_hold->value() = 4;
              }
            }
          }
          if (update_entities) {
            switch (extra_entities->value()) {
              case 5:
                {
                  uint16_t p2_resolution = *((uint16_t *)(&bytes[18]));
                  int16_t p2_speed = *((int16_t *)(&bytes[16]));
                  if (p2_speed < 0) p2_speed += MIN_INT16_VAL;
                  else p2_speed = -p2_speed;
                  float p2_speed_float = p2_speed / 100.0;
      
                  if (target2_speed->state != p2_speed_float) {
                    target2_speed->publish_state(p2_speed_float);
                  }
                  if (target2_resolution->state != p2_resolution) {
                    target2_resolution->publish_state(p2_resolution);
                  }
                }
              case 4:
                p2_angle = (p2_angle * RADIANS_TO_DEGREES) - 90;
      
                if (target2_angle->state != p2_angle) {
                  target2_angle->publish_state(p2_angle);
                }
                if (target2_distance->state != p2_distance) {
                  target2_distance->publish_state(p2_distance);
                }
              case 3:
                target2_active->publish_state(true);
              case 2:
              case 1:
                if (target2_x->state != p2_x) {
                  target2_x->publish_state(p2_x);
                }
                if (target2_y->state != p2_y) {
                  target2_y->publish_state(p2_y);
                }
                last_target_x_mm->value() = p2_x;
                last_target_y_mm->value() = p2_y;
            }
          }
        }
      }
      
      if (update_entities && !p2_detected && !target_masked) {
        bool preventClear2 = entry_exit_enabled->state && !any_now && prev_detected[1];
        switch (extra_entities->value()) {
          case 5:
            if (!(assumed_present_until != 0 && millis() < assumed_present_until) && !preventClear2) {
              if (target2_speed->state != 0) {
                target2_speed->publish_state(0);
              }
              if (target2_resolution->state != 0) {
                target2_resolution->publish_state(0);
              }
            }
          case 4:
            if (!(assumed_present_until != 0 && millis() < assumed_present_until) && !preventClear2) {
              if (target2_distance->state != 0) {
                target2_distance->publish_state(0);
              }
              if (target2_angle->state != 0) {
                target2_angle->publish_state(0);
              }
            }
          case 3:
            if (!(assumed_present_until != 0 && millis() < assumed_present_until) && !preventClear2) {
              target2_active->publish_state(false);
            }
          case 2:
          case 1:
            if (!(assumed_present_until != 0 && millis() < assumed_present_until) && !preventClear2) {
              if (target2_x->state != 0) {
                target2_x->publish_state(0);
              }
              if (target2_y->state != 0) {
                target2_y->publish_state(0);
              }
            }
        }
      }
      
      target_masked = false;
      
      if (p3_detected) {
        int16_t p3_x = *((int16_t *)(&bytes[20]));
        if (p3_x < 0) p3_x += MIN_INT16_VAL;
        else p3_x = -p3_x;
      
        int16_t p3_y = *((int16_t *)(&bytes[22]));
        if (p3_y < 0) p3_y += MIN_INT16_VAL;
        else p3_y = -p3_y;
      
        float p3_distance = sqrt(p3_x * p3_x + p3_y * p3_y);
        
        if (inverse_mounting->state) {
          p3_x = -p3_x;
        }
        
        if (p3_distance > max_distance) {
          p3_detected = false;
        } else {
          float p3_angle;
          if (installation_angle != 0 || (update_entities && extra_entities->value() >= 4)) {
            p3_angle = atan2(p3_y, p3_x);
          }
          if (installation_angle != 0) {
            float angle = p3_angle - installation_angle;
            p3_x = p3_distance * cos(angle);
            p3_y = p3_distance * sin(angle);
          }
          if (polygon_mode) {
            if (point_in_poly(p3_x, p3_y, poly_exclusions[0])) {
              occupancy_mask_1_count++;
              p3_detected = false;
              target_masked = true;
            } else if (point_in_poly(p3_x, p3_y, poly_exclusions[1])) {
              occupancy_mask_2_count++;
              p3_detected = false;
              target_masked = true;
            } else {
              if (point_in_poly(p3_x, p3_y, poly_zones[0])) { zone1_count++; last_zone_hold->value() = 1; }
              if (point_in_poly(p3_x, p3_y, poly_zones[1])) { zone2_count++; last_zone_hold->value() = 2; }
              if (point_in_poly(p3_x, p3_y, poly_zones[2])) { zone3_count++; last_zone_hold->value() = 3; }
              if (point_in_poly(p3_x, p3_y, poly_zones[3])) { zone4_count++; last_zone_hold->value() = 4; }
            }
          } else {
            if ((occupancy_mask_1_begin_x_value <= p3_x && p3_x <= occupancy_mask_1_end_x_value) &&
                (occupancy_mask_1_begin_y_value <= p3_y && p3_y <= occupancy_mask_1_end_y_value)) {
              occupancy_mask_1_count++;
              p3_detected = false;
              target_masked = true;
            } else if ((occupancy_mask_2_begin_x_value <= p3_x && p3_x <= occupancy_mask_2_end_x_value) &&
                (occupancy_mask_2_begin_y_value <= p3_y && p3_y <= occupancy_mask_2_end_y_value)) {
              occupancy_mask_2_count++;
              p3_detected = false;
              target_masked = true;
            } else {
              if ((zone1_begin_x_value <= p3_x && p3_x <= zone1_end_x_value) &&
                  (zone1_begin_y_value <= p3_y && p3_y <= zone1_end_y_value)) {
                zone1_count++;
                last_zone_hold->value() = 1;
              }
              if ((zone2_begin_x_value <= p3_x && p3_x <= zone2_end_x_value) &&
                  (zone2_begin_y_value <= p3_y && p3_y <= zone2_end_y_value)) {
                zone2_count++;
                last_zone_hold->value() = 2;
              }
              if ((zone3_begin_x_value <= p3_x && p3_x <= zone3_end_x_value) &&
                  (zone3_begin_y_value <= p3_y && p3_y <= zone3_end_y_value)) {
                zone3_count++;
                last_zone_hold->value() = 3;
              }
              if ((zone4_begin_x_value <= p3_x && p3_x <= zone4_end_x_value) &&
                  (zone4_begin_y_value <= p3_y && p3_y <= zone4_end_y_value)) {
                zone4_count++;
                last_zone_hold->value() = 4;
              }
            }
          }
          if (update_entities) {
            switch (extra_entities->value()) {
              case 5:
                {
                  uint16_t p3_resolution = *((uint16_t *)(&bytes[26]));
                  int16_t p3_speed = *((int16_t *)(&bytes[24]));
                  if (p3_speed < 0) p3_speed += MIN_INT16_VAL;
                  else p3_speed = -p3_speed;
                  float p3_speed_float = p3_speed / 100.0;
      
                  if (target3_speed->state != p3_speed_float) {
                    target3_speed->publish_state(p3_speed_float);
                  }
                  if (target3_resolution->state != p3_resolution) {
                    target3_resolution->publish_state(p3_resolution);
                  }
                }
              case 4:
                p3_angle = (p3_angle * RADIANS_TO_DEGREES) - 90;
                
                if (target3_angle->state != p3_angle) {
                  target3_angle->publish_state(p3_angle);
                }
                if (target3_distance->state != p3_distance) {
                  target3_distance->publish_state(p3_distance);
                }
              case 3:
                target3_active->publish_state(true);
              case 2:
              case 1:
                if (target3_x->state != p3_x) {
                  target3_x->publish_state(p3_x);
                }
                if (target3_y->state != p3_y) {
                  target3_y->publish_state(p3_y);
                }
                last_target_x_mm->value() = p3_x;
                last_target_y_mm->value() = p3_y;
            }
          }
        }
      }
      
      if (update_entities && !p3_detected && !target_masked) {
        bool preventClear3 = entry_exit_enabled->state && !any_now && prev_detected[2];
        switch (extra_entities->value()) {
          case 5:
            if (!(assumed_present_until != 0 && millis() < assumed_present_until) && !preventClear3) {
              if (target3_speed->state != 0) {
                target3_speed->publish_state(0);
              }
              if (target3_resolution->state != 0) {
                target3_resolution->publish_state(0);
              }
            }
          case 4:
            if (!(assumed_present_until != 0 && millis() < assumed_present_until) && !preventClear3) {
              if (target3_distance->state != 0) {
                target3_distance->publish_state(0);
              }
              if (target3_angle->state != 0) {
                target3_angle->publish_state(0);
              }
            }
          case 3:
            if (!(assumed_present_until != 0 && millis() < assumed_present_until) && !preventClear3) {
              target3_active->publish_state(false);
            }
          case 2:
          case 1:
            if (!(assumed_present_until != 0 && millis() < assumed_present_until) && !preventClear3) {
              if (target3_x->state != 0) {
                target3_x->publish_state(0);
              }
              if (target3_y->state != 0) {
                target3_y->publish_state(0);
              }
            }
        }
      }
      
      if (update_entities && extra_entities->value() >= 2) {
        if (zone1_target_count->state != zone1_count) {
          zone1_target_count->publish_state(zone1_count);
        }
        if (zone2_target_count->state != zone2_count) {
          zone2_target_count->publish_state(zone2_count);
        }
        if (zone3_target_count->state != zone3_count) {
          zone3_target_count->publish_state(zone3_count);
        }
        if (zone4_target_count->state != zone4_count) {
          zone4_target_count->publish_state(zone4_count);
        }
        if (occupancy_mask_1_target_count->state != occupancy_mask_1_count) {
          occupancy_mask_1_target_count->publish_state(occupancy_mask_1_count);
        }
        if (occupancy_mask_2_target_count->state != occupancy_mask_2_count) {
          occupancy_mask_2_target_count->publish_state(occupancy_mask_2_count);
        }
      }
      
       
       
      bool in_any_zone = (zone1_count > 0 || zone2_count > 0 || zone3_count > 0 || zone4_count > 0);
      if (any_now && !in_any_zone) {
        last_zone_hold->value() = 0;
      }
      
      static const int BUF_SZ = 600;
      struct Sample { unsigned long t; float x; float y; };
      static Sample hist[3][BUF_SZ];
      static uint16_t head[3] = {0,0,0};
      
      int e1_x1 = min((int)entry_zone_1_begin_x->state, (int)entry_zone_1_end_x->state);
      int e1_x2 = max((int)entry_zone_1_begin_x->state, (int)entry_zone_1_end_x->state);
      int e1_y1 = min((int)entry_zone_1_begin_y->state, (int)entry_zone_1_end_y->state);
      int e1_y2 = max((int)entry_zone_1_begin_y->state, (int)entry_zone_1_end_y->state);
      int e2_x1 = min((int)entry_zone_2_begin_x->state, (int)entry_zone_2_end_x->state);
      int e2_x2 = max((int)entry_zone_2_begin_x->state, (int)entry_zone_2_end_x->state);
      int e2_y1 = min((int)entry_zone_2_begin_y->state, (int)entry_zone_2_end_y->state);
      int e2_y2 = max((int)entry_zone_2_begin_y->state, (int)entry_zone_2_end_y->state);
      
      float poly_e1_y_min = 0, poly_e1_y_max = 0, poly_e2_y_min = 0, poly_e2_y_max = 0;
      if (polygon_mode) {
        if (poly_entries[0].count >= 3) {
          poly_e1_y_min = poly_e1_y_max = poly_entries[0].vy[0];
          for (int vi = 1; vi < poly_entries[0].count; vi++) {
            if (poly_entries[0].vy[vi] < poly_e1_y_min) poly_e1_y_min = poly_entries[0].vy[vi];
            if (poly_entries[0].vy[vi] > poly_e1_y_max) poly_e1_y_max = poly_entries[0].vy[vi];
          }
        }
        if (poly_entries[1].count >= 3) {
          poly_e2_y_min = poly_e2_y_max = poly_entries[1].vy[0];
          for (int vi = 1; vi < poly_entries[1].count; vi++) {
            if (poly_entries[1].vy[vi] < poly_e2_y_min) poly_e2_y_min = poly_entries[1].vy[vi];
            if (poly_entries[1].vy[vi] > poly_e2_y_max) poly_e2_y_max = poly_entries[1].vy[vi];
          }
        }
      }
      
      unsigned long now_ms = millis();
      if (p1_detected) { head[0] = (head[0] + 1) % BUF_SZ; hist[0][head[0]].t = now_ms; hist[0][head[0]].x = target1_x->state; hist[0][head[0]].y = target1_y->state; }
      if (p2_detected) { head[1] = (head[1] + 1) % BUF_SZ; hist[1][head[1]].t = now_ms; hist[1][head[1]].x = target2_x->state; hist[1][head[1]].y = target2_y->state; }
      if (p3_detected) { head[2] = (head[2] + 1) % BUF_SZ; hist[2][head[2]].t = now_ms; hist[2][head[2]].x = target3_x->state; hist[2][head[2]].y = target3_y->state; }
      
      bool detected_now[3] = {p1_detected, p2_detected, p3_detected};
      bool any_detected_now = p1_detected || p2_detected || p3_detected;
      if (any_detected_now) {
        assumed_present_until = 0;
      }
      
      if (entry_exit_enabled->state) {
        const unsigned long window_ms = 30000;
        const float threshold_scale = 1.0f + (exit_threshold_pct->state / 100.0f);
      
        if (!any_detected_now) {
          for (int i = 0; i < 3; i++) {
            if (prev_detected[i] && !detected_now[i]) {
              float len_e1 = 0.0f, len_e2 = 0.0f;
              bool e1_valid = polygon_mode ? (poly_entries[0].count >= 3) : !(e1_x1 == e1_x2 && e1_y1 == e1_y2);
              bool e2_valid = polygon_mode ? (poly_entries[1].count >= 3) : !(e2_x1 == e2_x2 && e2_y1 == e2_y2);
              if (e1_valid) {
                uint16_t ii = head[i];
                unsigned int steps = 0;
                while (steps < BUF_SZ) {
                  uint16_t jj = (ii + BUF_SZ - 1) % BUF_SZ;
                  const Sample &a = hist[i][jj];
                  const Sample &b = hist[i][ii];
                  if (b.t == 0 || a.t == 0) break;
                  if (now_ms - b.t > window_ms) break;
                  float mx = 0.5f * (a.x + b.x);
                  float my = 0.5f * (a.y + b.y);
                  bool in_e1 = polygon_mode ? point_in_poly(mx, my, poly_entries[0]) : (mx >= e1_x1 && mx <= e1_x2 && my >= e1_y1 && my <= e1_y2);
                  if (in_e1) {
                    float dx = b.x - a.x;
                    float dy = b.y - a.y;
                    len_e1 += sqrt(dx*dx + dy*dy);
                  }
                  ii = jj; steps++;
                }
              }
              if (e2_valid) {
                uint16_t ii2 = head[i];
                unsigned int steps2 = 0;
                while (steps2 < BUF_SZ) {
                  uint16_t jj2 = (ii2 + BUF_SZ - 1) % BUF_SZ;
                  const Sample &a2 = hist[i][jj2];
                  const Sample &b2 = hist[i][ii2];
                  if (b2.t == 0 || a2.t == 0) break;
                  if (now_ms - b2.t > window_ms) break;
                  float mx2 = 0.5f * (a2.x + b2.x);
                  float my2 = 0.5f * (a2.y + b2.y);
                  bool in_e2 = polygon_mode ? point_in_poly(mx2, my2, poly_entries[1]) : (mx2 >= e2_x1 && mx2 <= e2_x2 && my2 >= e2_y1 && my2 <= e2_y2);
                  if (in_e2) {
                    float dx2 = b2.x - a2.x;
                    float dy2 = b2.y - a2.y;
                    len_e2 += sqrt(dx2*dx2 + dy2*dy2);
                  }
                  ii2 = jj2; steps2++;
                }
              }
              float door1_depth = polygon_mode ? abs(poly_e1_y_max - poly_e1_y_min) : abs(e1_y2 - e1_y1);
              float door2_depth = polygon_mode ? abs(poly_e2_y_max - poly_e2_y_min) : abs(e2_y2 - e2_y1);
              bool valid_exit = false;
              if (door1_depth > 0 && len_e1 >= door1_depth * threshold_scale) valid_exit = true;
              if (door2_depth > 0 && len_e2 >= door2_depth * threshold_scale) valid_exit = true;
              if (!valid_exit) {
                unsigned long hold_ms = (unsigned long) (assume_present_timeout_s->state * 1000.0f);
                if (hold_ms > 0) {
                  assumed_present_until = now_ms + hold_ms;
                }
              }
              break;
            }
          }
        }
      }
      
      bool occ_now = any_detected_now;
      if (!occ_now && entry_exit_enabled->state) {
        if (assumed_present_until != 0 && millis() < assumed_present_until) {
          occ_now = true;
        }
      }
      occupancy->publish_state(occ_now);
      bool hold_active = (assumed_present_until != 0 && millis() < assumed_present_until);
      assumed_present_active->value() = hold_active;
      assumed_present_until_ms->value() = assumed_present_until;
      assumed_present->publish_state(hold_active);
      if (hold_active) {
        float remain = (assumed_present_until - millis()) / 1000.0f;
        if (remain < 0) remain = 0;
        assumed_present_remaining_s->publish_state(remain);
      } else {
        assumed_present_remaining_s->publish_state(0);
      }
      bool hold_active2 = (assumed_present_until != 0 && millis() < assumed_present_until);
      bool z1 = zone1_count > 0; if (hold_active2 && last_zone_hold->value() == 1) z1 = true;
      bool z2 = zone2_count > 0; if (hold_active2 && last_zone_hold->value() == 2) z2 = true;
      bool z3 = zone3_count > 0; if (hold_active2 && last_zone_hold->value() == 3) z3 = true;
      bool z4 = zone4_count > 0; if (hold_active2 && last_zone_hold->value() == 4) z4 = true;
      zone1_occupancy->publish_state(z1);
      zone2_occupancy->publish_state(z2);
      zone3_occupancy->publish_state(z3);
      zone4_occupancy->publish_state(z4);
      prev_detected[0] = p1_detected;
      prev_detected[1] = p2_detected;
      prev_detected[2] = p3_detected;
  });
  automation_id_18->add_actions({lambdaaction_id_12});
  uart_uartdebugger_id->set_direction(uart::UART_DIRECTION_BOTH);
  uart_uartdebugger_id->set_after_bytes(150);
  uart_uartdebugger_id->set_after_timeout(100);
  uart_uartdebugger_id->add_delimiter_byte(0x55);
  uart_uartdebugger_id->add_delimiter_byte(0xCC);
  uart_uartdummyreceiver_id = new uart::UARTDummyReceiver(uart_bus);
  uart_uartdummyreceiver_id->set_component_source(LOG_STR("uart"));
  App.register_component(uart_uartdummyreceiver_id);
  lambdaaction_id_8 = new StatelessLambdaAction<StringRef, size_t>([](StringRef x, size_t i) -> void {
      #line 968 "common/ld2450-base.yaml"
      mmwave_update_interval->value() = (i + 1) * 100;
  });
  automation_id_10->add_actions({lambdaaction_id_8});
  lambdaaction_id_9 = new StatelessLambdaAction<StringRef, size_t>([](StringRef x, size_t i) -> void {
      #line 985 "common/ld2450-base.yaml"
      switch (i) {
        case 3:
          entities_update_max_count->value() = 5;
          break;
        case 4:
          entities_update_max_count->value() = 10;
          break;
        case 5:
          entities_update_max_count->value() = 20;
          break;
        default:
          entities_update_max_count->value() = i + 1;
      }
  });
  automation_id_11->add_actions({lambdaaction_id_9});
  lambdaaction_id_10 = new StatelessLambdaAction<StringRef, size_t>([](StringRef x, size_t i) -> void {
      #line 1016 "common/ld2450-base.yaml"
      extra_entities->value() = i;
      
      if (i < 5) {   
        target1_speed->publish_state(NAN);
        target2_speed->publish_state(NAN);
        target3_speed->publish_state(NAN);
        target1_resolution->publish_state(NAN);
        target2_resolution->publish_state(NAN);
        target3_resolution->publish_state(NAN);
      }
      
      if (i < 4) {   
        target1_distance->publish_state(NAN);
        target2_distance->publish_state(NAN);
        target3_distance->publish_state(NAN);
        target1_angle->publish_state(NAN);
        target2_angle->publish_state(NAN);
        target3_angle->publish_state(NAN);
      }
      
      if (i < 3) {   
        target1_active->publish_state(false);
        target2_active->publish_state(false);
        target3_active->publish_state(false);
      }
      
      if (i < 2) {   
        zone1_target_count->publish_state(NAN);
        zone2_target_count->publish_state(NAN);
        zone3_target_count->publish_state(NAN);
        zone4_target_count->publish_state(NAN);
        occupancy_mask_1_target_count->publish_state(NAN);
        occupancy_mask_2_target_count->publish_state(NAN);
      }
      
      if (i < 1) {   
        target1_x->publish_state(NAN);
        target1_y->publish_state(NAN);
        target2_x->publish_state(NAN);
        target2_y->publish_state(NAN);
        target3_x->publish_state(NAN);
        target3_y->publish_state(NAN);
      }
  });
  automation_id_12->add_actions({lambdaaction_id_10});
  // =========== AUTO GENERATED CODE END ============
  App.setup();
}

void loop() {
  App.loop();
}
