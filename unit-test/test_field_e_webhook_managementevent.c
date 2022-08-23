#ifndef field_e_webhook_managementevent_TEST
#define field_e_webhook_managementevent_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define field_e_webhook_managementevent_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/field_e_webhook_managementevent.h"
field_e_webhook_managementevent_t* instantiate_field_e_webhook_managementevent(int include_optional);



field_e_webhook_managementevent_t* instantiate_field_e_webhook_managementevent(int include_optional) {
  field_e_webhook_managementevent_t* field_e_webhook_managementevent = NULL;
  if (include_optional) {
    field_e_webhook_managementevent = field_e_webhook_managementevent_create(
    );
  } else {
    field_e_webhook_managementevent = field_e_webhook_managementevent_create(
    );
  }

  return field_e_webhook_managementevent;
}


#ifdef field_e_webhook_managementevent_MAIN

void test_field_e_webhook_managementevent(int include_optional) {
    field_e_webhook_managementevent_t* field_e_webhook_managementevent_1 = instantiate_field_e_webhook_managementevent(include_optional);

	cJSON* jsonfield_e_webhook_managementevent_1 = field_e_webhook_managementevent_convertToJSON(field_e_webhook_managementevent_1);
	printf("field_e_webhook_managementevent :\n%s\n", cJSON_Print(jsonfield_e_webhook_managementevent_1));
	field_e_webhook_managementevent_t* field_e_webhook_managementevent_2 = field_e_webhook_managementevent_parseFromJSON(jsonfield_e_webhook_managementevent_1);
	cJSON* jsonfield_e_webhook_managementevent_2 = field_e_webhook_managementevent_convertToJSON(field_e_webhook_managementevent_2);
	printf("repeating field_e_webhook_managementevent:\n%s\n", cJSON_Print(jsonfield_e_webhook_managementevent_2));
}

int main() {
  test_field_e_webhook_managementevent(1);
  test_field_e_webhook_managementevent(0);

  printf("Hello world \n");
  return 0;
}

#endif // field_e_webhook_managementevent_MAIN
#endif // field_e_webhook_managementevent_TEST
