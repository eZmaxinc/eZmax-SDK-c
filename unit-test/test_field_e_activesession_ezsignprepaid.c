#ifndef field_e_activesession_ezsignprepaid_TEST
#define field_e_activesession_ezsignprepaid_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define field_e_activesession_ezsignprepaid_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/field_e_activesession_ezsignprepaid.h"
field_e_activesession_ezsignprepaid_t* instantiate_field_e_activesession_ezsignprepaid(int include_optional);



field_e_activesession_ezsignprepaid_t* instantiate_field_e_activesession_ezsignprepaid(int include_optional) {
  field_e_activesession_ezsignprepaid_t* field_e_activesession_ezsignprepaid = NULL;
  if (include_optional) {
    field_e_activesession_ezsignprepaid = field_e_activesession_ezsignprepaid_create(
    );
  } else {
    field_e_activesession_ezsignprepaid = field_e_activesession_ezsignprepaid_create(
    );
  }

  return field_e_activesession_ezsignprepaid;
}


#ifdef field_e_activesession_ezsignprepaid_MAIN

void test_field_e_activesession_ezsignprepaid(int include_optional) {
    field_e_activesession_ezsignprepaid_t* field_e_activesession_ezsignprepaid_1 = instantiate_field_e_activesession_ezsignprepaid(include_optional);

	cJSON* jsonfield_e_activesession_ezsignprepaid_1 = field_e_activesession_ezsignprepaid_convertToJSON(field_e_activesession_ezsignprepaid_1);
	printf("field_e_activesession_ezsignprepaid :\n%s\n", cJSON_Print(jsonfield_e_activesession_ezsignprepaid_1));
	field_e_activesession_ezsignprepaid_t* field_e_activesession_ezsignprepaid_2 = field_e_activesession_ezsignprepaid_parseFromJSON(jsonfield_e_activesession_ezsignprepaid_1);
	cJSON* jsonfield_e_activesession_ezsignprepaid_2 = field_e_activesession_ezsignprepaid_convertToJSON(field_e_activesession_ezsignprepaid_2);
	printf("repeating field_e_activesession_ezsignprepaid:\n%s\n", cJSON_Print(jsonfield_e_activesession_ezsignprepaid_2));
}

int main() {
  test_field_e_activesession_ezsignprepaid(1);
  test_field_e_activesession_ezsignprepaid(0);

  printf("Hello world \n");
  return 0;
}

#endif // field_e_activesession_ezsignprepaid_MAIN
#endif // field_e_activesession_ezsignprepaid_TEST
