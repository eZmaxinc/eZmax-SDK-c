#ifndef custom_e_webhook_ezsignevent_TEST
#define custom_e_webhook_ezsignevent_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define custom_e_webhook_ezsignevent_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/custom_e_webhook_ezsignevent.h"
custom_e_webhook_ezsignevent_t* instantiate_custom_e_webhook_ezsignevent(int include_optional);



custom_e_webhook_ezsignevent_t* instantiate_custom_e_webhook_ezsignevent(int include_optional) {
  custom_e_webhook_ezsignevent_t* custom_e_webhook_ezsignevent = NULL;
  if (include_optional) {
    custom_e_webhook_ezsignevent = custom_e_webhook_ezsignevent_create(
    );
  } else {
    custom_e_webhook_ezsignevent = custom_e_webhook_ezsignevent_create(
    );
  }

  return custom_e_webhook_ezsignevent;
}


#ifdef custom_e_webhook_ezsignevent_MAIN

void test_custom_e_webhook_ezsignevent(int include_optional) {
    custom_e_webhook_ezsignevent_t* custom_e_webhook_ezsignevent_1 = instantiate_custom_e_webhook_ezsignevent(include_optional);

	cJSON* jsoncustom_e_webhook_ezsignevent_1 = custom_e_webhook_ezsignevent_convertToJSON(custom_e_webhook_ezsignevent_1);
	printf("custom_e_webhook_ezsignevent :\n%s\n", cJSON_Print(jsoncustom_e_webhook_ezsignevent_1));
	custom_e_webhook_ezsignevent_t* custom_e_webhook_ezsignevent_2 = custom_e_webhook_ezsignevent_parseFromJSON(jsoncustom_e_webhook_ezsignevent_1);
	cJSON* jsoncustom_e_webhook_ezsignevent_2 = custom_e_webhook_ezsignevent_convertToJSON(custom_e_webhook_ezsignevent_2);
	printf("repeating custom_e_webhook_ezsignevent:\n%s\n", cJSON_Print(jsoncustom_e_webhook_ezsignevent_2));
}

int main() {
  test_custom_e_webhook_ezsignevent(1);
  test_custom_e_webhook_ezsignevent(0);

  printf("Hello world \n");
  return 0;
}

#endif // custom_e_webhook_ezsignevent_MAIN
#endif // custom_e_webhook_ezsignevent_TEST
