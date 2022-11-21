//A configuração de login e senha é feita no arquivo wifi.h

//Bibibliotecas
#include <string.h>
#include "wifi.h"
#include "webserver.h"

void app_main(void)
{
    // Inicializa NVS
    esp_err_t ret = nvs_flash_init();
    if (ret == ESP_ERR_NVS_NO_FREE_PAGES || ret == ESP_ERR_NVS_NEW_VERSION_FOUND)
    {
        ESP_ERROR_CHECK(nvs_flash_erase());
        ret = nvs_flash_init();
    }
    ESP_ERROR_CHECK(ret);

    wifi_init_softap();
    start_webserver();
}
