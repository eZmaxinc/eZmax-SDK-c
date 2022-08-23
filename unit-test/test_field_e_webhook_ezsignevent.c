#ifndef field_e_webhook_ezsignevent_TEST
#define field_e_webhook_ezsignevent_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define field_e_webhook_ezsignevent_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/field_e_webhook_ezsignevent.h"
field_e_webhook_ezsignevent_t* instantiate_field_e_webhook_ezsignevent(int include_optional);



field_e_webhook_ezsignevent_t* instantiate_field_e_webhook_ezsignevent(int include_optional) {
  field_e_webhook_ezsignevent_t* field_e_webhook_ezsignevent = NULL;
  if (include_optional) {
    field_e_webhook_ezsignevent = field_e_webhook_ezsignevent_create(
    );
  } else {
    field_e_webhook_ezsignevent = field_e_webhook_ezsignevent_create(
    );
  }

  return field_e_webhook_ezsignevent;
}


#ifdef field_e_webhook_ezsignevent_MAIN

void test_field_e_webhook_ezsignevent(int include_optional) {
    field_e_webhook_ezsignevent_t* field_e_webhook_ezsignevent_1 = instantiate_field_e_webhook_ezsignevent(include_optional);

	cJSON* jsonfield_e_webhook_ezsignevent_1 = field_e_webhook_ezsignevent_convertToJSON(field_e_webhook_ezsignevent_1);
	printf("field_e_webhook_ezsignevent :\n%s\n", cJSON_Print(jsonfield_e_webhook_ezsignevent_1));
	field_e_webhook_ezsignevent_t* field_e_webhook_ezsignevent_2 = field_e_webhook_ezsignevent_parseFromJSON(jsonfield_e_webhook_ezsignevent_1);
	cJSON* jsonfield_e_webhook_ezsignevent_2 = field_e_webhook_ezsignevent_convertToJSON(field_e_webhook_ezsignevent_2);
	printf("repeating field_e_webhook_ezsignevent:\n%s\n", cJSON_Print(jsonfield_e_webhook_ezsignevent_2));
}

int main() {
  test_field_e_webhook_ezsignevent(1);
  test_field_e_webhook_ezsignevent(0);

  printf("Hello world \n");
  return 0;
}

#endif // field_e_webhook_ezsignevent_MAIN
#endif // field_e_webhook_ezsignevent_TEST
