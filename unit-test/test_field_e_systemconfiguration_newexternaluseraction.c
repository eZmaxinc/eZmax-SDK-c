#ifndef field_e_systemconfiguration_newexternaluseraction_TEST
#define field_e_systemconfiguration_newexternaluseraction_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define field_e_systemconfiguration_newexternaluseraction_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/field_e_systemconfiguration_newexternaluseraction.h"
field_e_systemconfiguration_newexternaluseraction_t* instantiate_field_e_systemconfiguration_newexternaluseraction(int include_optional);



field_e_systemconfiguration_newexternaluseraction_t* instantiate_field_e_systemconfiguration_newexternaluseraction(int include_optional) {
  field_e_systemconfiguration_newexternaluseraction_t* field_e_systemconfiguration_newexternaluseraction = NULL;
  if (include_optional) {
    field_e_systemconfiguration_newexternaluseraction = field_e_systemconfiguration_newexternaluseraction_create(
    );
  } else {
    field_e_systemconfiguration_newexternaluseraction = field_e_systemconfiguration_newexternaluseraction_create(
    );
  }

  return field_e_systemconfiguration_newexternaluseraction;
}


#ifdef field_e_systemconfiguration_newexternaluseraction_MAIN

void test_field_e_systemconfiguration_newexternaluseraction(int include_optional) {
    field_e_systemconfiguration_newexternaluseraction_t* field_e_systemconfiguration_newexternaluseraction_1 = instantiate_field_e_systemconfiguration_newexternaluseraction(include_optional);

	cJSON* jsonfield_e_systemconfiguration_newexternaluseraction_1 = field_e_systemconfiguration_newexternaluseraction_convertToJSON(field_e_systemconfiguration_newexternaluseraction_1);
	printf("field_e_systemconfiguration_newexternaluseraction :\n%s\n", cJSON_Print(jsonfield_e_systemconfiguration_newexternaluseraction_1));
	field_e_systemconfiguration_newexternaluseraction_t* field_e_systemconfiguration_newexternaluseraction_2 = field_e_systemconfiguration_newexternaluseraction_parseFromJSON(jsonfield_e_systemconfiguration_newexternaluseraction_1);
	cJSON* jsonfield_e_systemconfiguration_newexternaluseraction_2 = field_e_systemconfiguration_newexternaluseraction_convertToJSON(field_e_systemconfiguration_newexternaluseraction_2);
	printf("repeating field_e_systemconfiguration_newexternaluseraction:\n%s\n", cJSON_Print(jsonfield_e_systemconfiguration_newexternaluseraction_2));
}

int main() {
  test_field_e_systemconfiguration_newexternaluseraction(1);
  test_field_e_systemconfiguration_newexternaluseraction(0);

  printf("Hello world \n");
  return 0;
}

#endif // field_e_systemconfiguration_newexternaluseraction_MAIN
#endif // field_e_systemconfiguration_newexternaluseraction_TEST
