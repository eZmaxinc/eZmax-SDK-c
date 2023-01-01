#ifndef field_e_communicationexternalrecipient_type_TEST
#define field_e_communicationexternalrecipient_type_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define field_e_communicationexternalrecipient_type_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/field_e_communicationexternalrecipient_type.h"
field_e_communicationexternalrecipient_type_t* instantiate_field_e_communicationexternalrecipient_type(int include_optional);



field_e_communicationexternalrecipient_type_t* instantiate_field_e_communicationexternalrecipient_type(int include_optional) {
  field_e_communicationexternalrecipient_type_t* field_e_communicationexternalrecipient_type = NULL;
  if (include_optional) {
    field_e_communicationexternalrecipient_type = field_e_communicationexternalrecipient_type_create(
    );
  } else {
    field_e_communicationexternalrecipient_type = field_e_communicationexternalrecipient_type_create(
    );
  }

  return field_e_communicationexternalrecipient_type;
}


#ifdef field_e_communicationexternalrecipient_type_MAIN

void test_field_e_communicationexternalrecipient_type(int include_optional) {
    field_e_communicationexternalrecipient_type_t* field_e_communicationexternalrecipient_type_1 = instantiate_field_e_communicationexternalrecipient_type(include_optional);

	cJSON* jsonfield_e_communicationexternalrecipient_type_1 = field_e_communicationexternalrecipient_type_convertToJSON(field_e_communicationexternalrecipient_type_1);
	printf("field_e_communicationexternalrecipient_type :\n%s\n", cJSON_Print(jsonfield_e_communicationexternalrecipient_type_1));
	field_e_communicationexternalrecipient_type_t* field_e_communicationexternalrecipient_type_2 = field_e_communicationexternalrecipient_type_parseFromJSON(jsonfield_e_communicationexternalrecipient_type_1);
	cJSON* jsonfield_e_communicationexternalrecipient_type_2 = field_e_communicationexternalrecipient_type_convertToJSON(field_e_communicationexternalrecipient_type_2);
	printf("repeating field_e_communicationexternalrecipient_type:\n%s\n", cJSON_Print(jsonfield_e_communicationexternalrecipient_type_2));
}

int main() {
  test_field_e_communicationexternalrecipient_type(1);
  test_field_e_communicationexternalrecipient_type(0);

  printf("Hello world \n");
  return 0;
}

#endif // field_e_communicationexternalrecipient_type_MAIN
#endif // field_e_communicationexternalrecipient_type_TEST
