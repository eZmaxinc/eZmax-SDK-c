#ifndef field_e_communication_importance_TEST
#define field_e_communication_importance_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define field_e_communication_importance_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/field_e_communication_importance.h"
field_e_communication_importance_t* instantiate_field_e_communication_importance(int include_optional);



field_e_communication_importance_t* instantiate_field_e_communication_importance(int include_optional) {
  field_e_communication_importance_t* field_e_communication_importance = NULL;
  if (include_optional) {
    field_e_communication_importance = field_e_communication_importance_create(
    );
  } else {
    field_e_communication_importance = field_e_communication_importance_create(
    );
  }

  return field_e_communication_importance;
}


#ifdef field_e_communication_importance_MAIN

void test_field_e_communication_importance(int include_optional) {
    field_e_communication_importance_t* field_e_communication_importance_1 = instantiate_field_e_communication_importance(include_optional);

	cJSON* jsonfield_e_communication_importance_1 = field_e_communication_importance_convertToJSON(field_e_communication_importance_1);
	printf("field_e_communication_importance :\n%s\n", cJSON_Print(jsonfield_e_communication_importance_1));
	field_e_communication_importance_t* field_e_communication_importance_2 = field_e_communication_importance_parseFromJSON(jsonfield_e_communication_importance_1);
	cJSON* jsonfield_e_communication_importance_2 = field_e_communication_importance_convertToJSON(field_e_communication_importance_2);
	printf("repeating field_e_communication_importance:\n%s\n", cJSON_Print(jsonfield_e_communication_importance_2));
}

int main() {
  test_field_e_communication_importance(1);
  test_field_e_communication_importance(0);

  printf("Hello world \n");
  return 0;
}

#endif // field_e_communication_importance_MAIN
#endif // field_e_communication_importance_TEST
