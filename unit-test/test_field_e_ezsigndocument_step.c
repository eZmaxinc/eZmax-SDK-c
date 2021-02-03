#ifndef field_e_ezsigndocument_step_TEST
#define field_e_ezsigndocument_step_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define field_e_ezsigndocument_step_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/field_e_ezsigndocument_step.h"
field_e_ezsigndocument_step_t* instantiate_field_e_ezsigndocument_step(int include_optional);



field_e_ezsigndocument_step_t* instantiate_field_e_ezsigndocument_step(int include_optional) {
  field_e_ezsigndocument_step_t* field_e_ezsigndocument_step = NULL;
  if (include_optional) {
    field_e_ezsigndocument_step = field_e_ezsigndocument_step_create(
    );
  } else {
    field_e_ezsigndocument_step = field_e_ezsigndocument_step_create(
    );
  }

  return field_e_ezsigndocument_step;
}


#ifdef field_e_ezsigndocument_step_MAIN

void test_field_e_ezsigndocument_step(int include_optional) {
    field_e_ezsigndocument_step_t* field_e_ezsigndocument_step_1 = instantiate_field_e_ezsigndocument_step(include_optional);

	cJSON* jsonfield_e_ezsigndocument_step_1 = field_e_ezsigndocument_step_convertToJSON(field_e_ezsigndocument_step_1);
	printf("field_e_ezsigndocument_step :\n%s\n", cJSON_Print(jsonfield_e_ezsigndocument_step_1));
	field_e_ezsigndocument_step_t* field_e_ezsigndocument_step_2 = field_e_ezsigndocument_step_parseFromJSON(jsonfield_e_ezsigndocument_step_1);
	cJSON* jsonfield_e_ezsigndocument_step_2 = field_e_ezsigndocument_step_convertToJSON(field_e_ezsigndocument_step_2);
	printf("repeating field_e_ezsigndocument_step:\n%s\n", cJSON_Print(jsonfield_e_ezsigndocument_step_2));
}

int main() {
  test_field_e_ezsigndocument_step(1);
  test_field_e_ezsigndocument_step(0);

  printf("Hello world \n");
  return 0;
}

#endif // field_e_ezsigndocument_step_MAIN
#endif // field_e_ezsigndocument_step_TEST
