#ifndef field_e_communication_emailimportance_TEST
#define field_e_communication_emailimportance_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define field_e_communication_emailimportance_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/field_e_communication_emailimportance.h"
field_e_communication_emailimportance_t* instantiate_field_e_communication_emailimportance(int include_optional);



field_e_communication_emailimportance_t* instantiate_field_e_communication_emailimportance(int include_optional) {
  field_e_communication_emailimportance_t* field_e_communication_emailimportance = NULL;
  if (include_optional) {
    field_e_communication_emailimportance = field_e_communication_emailimportance_create(
    );
  } else {
    field_e_communication_emailimportance = field_e_communication_emailimportance_create(
    );
  }

  return field_e_communication_emailimportance;
}


#ifdef field_e_communication_emailimportance_MAIN

void test_field_e_communication_emailimportance(int include_optional) {
    field_e_communication_emailimportance_t* field_e_communication_emailimportance_1 = instantiate_field_e_communication_emailimportance(include_optional);

	cJSON* jsonfield_e_communication_emailimportance_1 = field_e_communication_emailimportance_convertToJSON(field_e_communication_emailimportance_1);
	printf("field_e_communication_emailimportance :\n%s\n", cJSON_Print(jsonfield_e_communication_emailimportance_1));
	field_e_communication_emailimportance_t* field_e_communication_emailimportance_2 = field_e_communication_emailimportance_parseFromJSON(jsonfield_e_communication_emailimportance_1);
	cJSON* jsonfield_e_communication_emailimportance_2 = field_e_communication_emailimportance_convertToJSON(field_e_communication_emailimportance_2);
	printf("repeating field_e_communication_emailimportance:\n%s\n", cJSON_Print(jsonfield_e_communication_emailimportance_2));
}

int main() {
  test_field_e_communication_emailimportance(1);
  test_field_e_communication_emailimportance(0);

  printf("Hello world \n");
  return 0;
}

#endif // field_e_communication_emailimportance_MAIN
#endif // field_e_communication_emailimportance_TEST
