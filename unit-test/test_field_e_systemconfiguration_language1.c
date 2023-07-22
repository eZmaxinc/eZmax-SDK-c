#ifndef field_e_systemconfiguration_language1_TEST
#define field_e_systemconfiguration_language1_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define field_e_systemconfiguration_language1_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/field_e_systemconfiguration_language1.h"
field_e_systemconfiguration_language1_t* instantiate_field_e_systemconfiguration_language1(int include_optional);



field_e_systemconfiguration_language1_t* instantiate_field_e_systemconfiguration_language1(int include_optional) {
  field_e_systemconfiguration_language1_t* field_e_systemconfiguration_language1 = NULL;
  if (include_optional) {
    field_e_systemconfiguration_language1 = field_e_systemconfiguration_language1_create(
    );
  } else {
    field_e_systemconfiguration_language1 = field_e_systemconfiguration_language1_create(
    );
  }

  return field_e_systemconfiguration_language1;
}


#ifdef field_e_systemconfiguration_language1_MAIN

void test_field_e_systemconfiguration_language1(int include_optional) {
    field_e_systemconfiguration_language1_t* field_e_systemconfiguration_language1_1 = instantiate_field_e_systemconfiguration_language1(include_optional);

	cJSON* jsonfield_e_systemconfiguration_language1_1 = field_e_systemconfiguration_language1_convertToJSON(field_e_systemconfiguration_language1_1);
	printf("field_e_systemconfiguration_language1 :\n%s\n", cJSON_Print(jsonfield_e_systemconfiguration_language1_1));
	field_e_systemconfiguration_language1_t* field_e_systemconfiguration_language1_2 = field_e_systemconfiguration_language1_parseFromJSON(jsonfield_e_systemconfiguration_language1_1);
	cJSON* jsonfield_e_systemconfiguration_language1_2 = field_e_systemconfiguration_language1_convertToJSON(field_e_systemconfiguration_language1_2);
	printf("repeating field_e_systemconfiguration_language1:\n%s\n", cJSON_Print(jsonfield_e_systemconfiguration_language1_2));
}

int main() {
  test_field_e_systemconfiguration_language1(1);
  test_field_e_systemconfiguration_language1(0);

  printf("Hello world \n");
  return 0;
}

#endif // field_e_systemconfiguration_language1_MAIN
#endif // field_e_systemconfiguration_language1_TEST
