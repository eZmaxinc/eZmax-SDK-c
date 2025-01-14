#ifndef field_e_signature_preference_TEST
#define field_e_signature_preference_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define field_e_signature_preference_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/field_e_signature_preference.h"
field_e_signature_preference_t* instantiate_field_e_signature_preference(int include_optional);



field_e_signature_preference_t* instantiate_field_e_signature_preference(int include_optional) {
  field_e_signature_preference_t* field_e_signature_preference = NULL;
  if (include_optional) {
    field_e_signature_preference = field_e_signature_preference_create(
    );
  } else {
    field_e_signature_preference = field_e_signature_preference_create(
    );
  }

  return field_e_signature_preference;
}


#ifdef field_e_signature_preference_MAIN

void test_field_e_signature_preference(int include_optional) {
    field_e_signature_preference_t* field_e_signature_preference_1 = instantiate_field_e_signature_preference(include_optional);

	cJSON* jsonfield_e_signature_preference_1 = field_e_signature_preference_convertToJSON(field_e_signature_preference_1);
	printf("field_e_signature_preference :\n%s\n", cJSON_Print(jsonfield_e_signature_preference_1));
	field_e_signature_preference_t* field_e_signature_preference_2 = field_e_signature_preference_parseFromJSON(jsonfield_e_signature_preference_1);
	cJSON* jsonfield_e_signature_preference_2 = field_e_signature_preference_convertToJSON(field_e_signature_preference_2);
	printf("repeating field_e_signature_preference:\n%s\n", cJSON_Print(jsonfield_e_signature_preference_2));
}

int main() {
  test_field_e_signature_preference(1);
  test_field_e_signature_preference(0);

  printf("Hello world \n");
  return 0;
}

#endif // field_e_signature_preference_MAIN
#endif // field_e_signature_preference_TEST
