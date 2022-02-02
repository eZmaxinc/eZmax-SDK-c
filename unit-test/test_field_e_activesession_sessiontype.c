#ifndef field_e_activesession_sessiontype_TEST
#define field_e_activesession_sessiontype_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define field_e_activesession_sessiontype_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/field_e_activesession_sessiontype.h"
field_e_activesession_sessiontype_t* instantiate_field_e_activesession_sessiontype(int include_optional);



field_e_activesession_sessiontype_t* instantiate_field_e_activesession_sessiontype(int include_optional) {
  field_e_activesession_sessiontype_t* field_e_activesession_sessiontype = NULL;
  if (include_optional) {
    field_e_activesession_sessiontype = field_e_activesession_sessiontype_create(
    );
  } else {
    field_e_activesession_sessiontype = field_e_activesession_sessiontype_create(
    );
  }

  return field_e_activesession_sessiontype;
}


#ifdef field_e_activesession_sessiontype_MAIN

void test_field_e_activesession_sessiontype(int include_optional) {
    field_e_activesession_sessiontype_t* field_e_activesession_sessiontype_1 = instantiate_field_e_activesession_sessiontype(include_optional);

	cJSON* jsonfield_e_activesession_sessiontype_1 = field_e_activesession_sessiontype_convertToJSON(field_e_activesession_sessiontype_1);
	printf("field_e_activesession_sessiontype :\n%s\n", cJSON_Print(jsonfield_e_activesession_sessiontype_1));
	field_e_activesession_sessiontype_t* field_e_activesession_sessiontype_2 = field_e_activesession_sessiontype_parseFromJSON(jsonfield_e_activesession_sessiontype_1);
	cJSON* jsonfield_e_activesession_sessiontype_2 = field_e_activesession_sessiontype_convertToJSON(field_e_activesession_sessiontype_2);
	printf("repeating field_e_activesession_sessiontype:\n%s\n", cJSON_Print(jsonfield_e_activesession_sessiontype_2));
}

int main() {
  test_field_e_activesession_sessiontype(1);
  test_field_e_activesession_sessiontype(0);

  printf("Hello world \n");
  return 0;
}

#endif // field_e_activesession_sessiontype_MAIN
#endif // field_e_activesession_sessiontype_TEST
