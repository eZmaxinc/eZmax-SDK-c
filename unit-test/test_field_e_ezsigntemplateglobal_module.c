#ifndef field_e_ezsigntemplateglobal_module_TEST
#define field_e_ezsigntemplateglobal_module_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define field_e_ezsigntemplateglobal_module_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/field_e_ezsigntemplateglobal_module.h"
field_e_ezsigntemplateglobal_module_t* instantiate_field_e_ezsigntemplateglobal_module(int include_optional);



field_e_ezsigntemplateglobal_module_t* instantiate_field_e_ezsigntemplateglobal_module(int include_optional) {
  field_e_ezsigntemplateglobal_module_t* field_e_ezsigntemplateglobal_module = NULL;
  if (include_optional) {
    field_e_ezsigntemplateglobal_module = field_e_ezsigntemplateglobal_module_create(
    );
  } else {
    field_e_ezsigntemplateglobal_module = field_e_ezsigntemplateglobal_module_create(
    );
  }

  return field_e_ezsigntemplateglobal_module;
}


#ifdef field_e_ezsigntemplateglobal_module_MAIN

void test_field_e_ezsigntemplateglobal_module(int include_optional) {
    field_e_ezsigntemplateglobal_module_t* field_e_ezsigntemplateglobal_module_1 = instantiate_field_e_ezsigntemplateglobal_module(include_optional);

	cJSON* jsonfield_e_ezsigntemplateglobal_module_1 = field_e_ezsigntemplateglobal_module_convertToJSON(field_e_ezsigntemplateglobal_module_1);
	printf("field_e_ezsigntemplateglobal_module :\n%s\n", cJSON_Print(jsonfield_e_ezsigntemplateglobal_module_1));
	field_e_ezsigntemplateglobal_module_t* field_e_ezsigntemplateglobal_module_2 = field_e_ezsigntemplateglobal_module_parseFromJSON(jsonfield_e_ezsigntemplateglobal_module_1);
	cJSON* jsonfield_e_ezsigntemplateglobal_module_2 = field_e_ezsigntemplateglobal_module_convertToJSON(field_e_ezsigntemplateglobal_module_2);
	printf("repeating field_e_ezsigntemplateglobal_module:\n%s\n", cJSON_Print(jsonfield_e_ezsigntemplateglobal_module_2));
}

int main() {
  test_field_e_ezsigntemplateglobal_module(1);
  test_field_e_ezsigntemplateglobal_module(0);

  printf("Hello world \n");
  return 0;
}

#endif // field_e_ezsigntemplateglobal_module_MAIN
#endif // field_e_ezsigntemplateglobal_module_TEST
