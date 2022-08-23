#ifndef field_e_webhook_module_TEST
#define field_e_webhook_module_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define field_e_webhook_module_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/field_e_webhook_module.h"
field_e_webhook_module_t* instantiate_field_e_webhook_module(int include_optional);



field_e_webhook_module_t* instantiate_field_e_webhook_module(int include_optional) {
  field_e_webhook_module_t* field_e_webhook_module = NULL;
  if (include_optional) {
    field_e_webhook_module = field_e_webhook_module_create(
    );
  } else {
    field_e_webhook_module = field_e_webhook_module_create(
    );
  }

  return field_e_webhook_module;
}


#ifdef field_e_webhook_module_MAIN

void test_field_e_webhook_module(int include_optional) {
    field_e_webhook_module_t* field_e_webhook_module_1 = instantiate_field_e_webhook_module(include_optional);

	cJSON* jsonfield_e_webhook_module_1 = field_e_webhook_module_convertToJSON(field_e_webhook_module_1);
	printf("field_e_webhook_module :\n%s\n", cJSON_Print(jsonfield_e_webhook_module_1));
	field_e_webhook_module_t* field_e_webhook_module_2 = field_e_webhook_module_parseFromJSON(jsonfield_e_webhook_module_1);
	cJSON* jsonfield_e_webhook_module_2 = field_e_webhook_module_convertToJSON(field_e_webhook_module_2);
	printf("repeating field_e_webhook_module:\n%s\n", cJSON_Print(jsonfield_e_webhook_module_2));
}

int main() {
  test_field_e_webhook_module(1);
  test_field_e_webhook_module(0);

  printf("Hello world \n");
  return 0;
}

#endif // field_e_webhook_module_MAIN
#endif // field_e_webhook_module_TEST
