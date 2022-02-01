#ifndef field_e_activesession_weekdaystart_TEST
#define field_e_activesession_weekdaystart_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define field_e_activesession_weekdaystart_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/field_e_activesession_weekdaystart.h"
field_e_activesession_weekdaystart_t* instantiate_field_e_activesession_weekdaystart(int include_optional);



field_e_activesession_weekdaystart_t* instantiate_field_e_activesession_weekdaystart(int include_optional) {
  field_e_activesession_weekdaystart_t* field_e_activesession_weekdaystart = NULL;
  if (include_optional) {
    field_e_activesession_weekdaystart = field_e_activesession_weekdaystart_create(
    );
  } else {
    field_e_activesession_weekdaystart = field_e_activesession_weekdaystart_create(
    );
  }

  return field_e_activesession_weekdaystart;
}


#ifdef field_e_activesession_weekdaystart_MAIN

void test_field_e_activesession_weekdaystart(int include_optional) {
    field_e_activesession_weekdaystart_t* field_e_activesession_weekdaystart_1 = instantiate_field_e_activesession_weekdaystart(include_optional);

	cJSON* jsonfield_e_activesession_weekdaystart_1 = field_e_activesession_weekdaystart_convertToJSON(field_e_activesession_weekdaystart_1);
	printf("field_e_activesession_weekdaystart :\n%s\n", cJSON_Print(jsonfield_e_activesession_weekdaystart_1));
	field_e_activesession_weekdaystart_t* field_e_activesession_weekdaystart_2 = field_e_activesession_weekdaystart_parseFromJSON(jsonfield_e_activesession_weekdaystart_1);
	cJSON* jsonfield_e_activesession_weekdaystart_2 = field_e_activesession_weekdaystart_convertToJSON(field_e_activesession_weekdaystart_2);
	printf("repeating field_e_activesession_weekdaystart:\n%s\n", cJSON_Print(jsonfield_e_activesession_weekdaystart_2));
}

int main() {
  test_field_e_activesession_weekdaystart(1);
  test_field_e_activesession_weekdaystart(0);

  printf("Hello world \n");
  return 0;
}

#endif // field_e_activesession_weekdaystart_MAIN
#endif // field_e_activesession_weekdaystart_TEST
