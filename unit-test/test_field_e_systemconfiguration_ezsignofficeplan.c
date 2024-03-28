#ifndef field_e_systemconfiguration_ezsignofficeplan_TEST
#define field_e_systemconfiguration_ezsignofficeplan_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define field_e_systemconfiguration_ezsignofficeplan_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/field_e_systemconfiguration_ezsignofficeplan.h"
field_e_systemconfiguration_ezsignofficeplan_t* instantiate_field_e_systemconfiguration_ezsignofficeplan(int include_optional);



field_e_systemconfiguration_ezsignofficeplan_t* instantiate_field_e_systemconfiguration_ezsignofficeplan(int include_optional) {
  field_e_systemconfiguration_ezsignofficeplan_t* field_e_systemconfiguration_ezsignofficeplan = NULL;
  if (include_optional) {
    field_e_systemconfiguration_ezsignofficeplan = field_e_systemconfiguration_ezsignofficeplan_create(
    );
  } else {
    field_e_systemconfiguration_ezsignofficeplan = field_e_systemconfiguration_ezsignofficeplan_create(
    );
  }

  return field_e_systemconfiguration_ezsignofficeplan;
}


#ifdef field_e_systemconfiguration_ezsignofficeplan_MAIN

void test_field_e_systemconfiguration_ezsignofficeplan(int include_optional) {
    field_e_systemconfiguration_ezsignofficeplan_t* field_e_systemconfiguration_ezsignofficeplan_1 = instantiate_field_e_systemconfiguration_ezsignofficeplan(include_optional);

	cJSON* jsonfield_e_systemconfiguration_ezsignofficeplan_1 = field_e_systemconfiguration_ezsignofficeplan_convertToJSON(field_e_systemconfiguration_ezsignofficeplan_1);
	printf("field_e_systemconfiguration_ezsignofficeplan :\n%s\n", cJSON_Print(jsonfield_e_systemconfiguration_ezsignofficeplan_1));
	field_e_systemconfiguration_ezsignofficeplan_t* field_e_systemconfiguration_ezsignofficeplan_2 = field_e_systemconfiguration_ezsignofficeplan_parseFromJSON(jsonfield_e_systemconfiguration_ezsignofficeplan_1);
	cJSON* jsonfield_e_systemconfiguration_ezsignofficeplan_2 = field_e_systemconfiguration_ezsignofficeplan_convertToJSON(field_e_systemconfiguration_ezsignofficeplan_2);
	printf("repeating field_e_systemconfiguration_ezsignofficeplan:\n%s\n", cJSON_Print(jsonfield_e_systemconfiguration_ezsignofficeplan_2));
}

int main() {
  test_field_e_systemconfiguration_ezsignofficeplan(1);
  test_field_e_systemconfiguration_ezsignofficeplan(0);

  printf("Hello world \n");
  return 0;
}

#endif // field_e_systemconfiguration_ezsignofficeplan_MAIN
#endif // field_e_systemconfiguration_ezsignofficeplan_TEST
