#ifndef computed_e_ezsigndocument_steptype_TEST
#define computed_e_ezsigndocument_steptype_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define computed_e_ezsigndocument_steptype_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/computed_e_ezsigndocument_steptype.h"
computed_e_ezsigndocument_steptype_t* instantiate_computed_e_ezsigndocument_steptype(int include_optional);



computed_e_ezsigndocument_steptype_t* instantiate_computed_e_ezsigndocument_steptype(int include_optional) {
  computed_e_ezsigndocument_steptype_t* computed_e_ezsigndocument_steptype = NULL;
  if (include_optional) {
    computed_e_ezsigndocument_steptype = computed_e_ezsigndocument_steptype_create(
    );
  } else {
    computed_e_ezsigndocument_steptype = computed_e_ezsigndocument_steptype_create(
    );
  }

  return computed_e_ezsigndocument_steptype;
}


#ifdef computed_e_ezsigndocument_steptype_MAIN

void test_computed_e_ezsigndocument_steptype(int include_optional) {
    computed_e_ezsigndocument_steptype_t* computed_e_ezsigndocument_steptype_1 = instantiate_computed_e_ezsigndocument_steptype(include_optional);

	cJSON* jsoncomputed_e_ezsigndocument_steptype_1 = computed_e_ezsigndocument_steptype_convertToJSON(computed_e_ezsigndocument_steptype_1);
	printf("computed_e_ezsigndocument_steptype :\n%s\n", cJSON_Print(jsoncomputed_e_ezsigndocument_steptype_1));
	computed_e_ezsigndocument_steptype_t* computed_e_ezsigndocument_steptype_2 = computed_e_ezsigndocument_steptype_parseFromJSON(jsoncomputed_e_ezsigndocument_steptype_1);
	cJSON* jsoncomputed_e_ezsigndocument_steptype_2 = computed_e_ezsigndocument_steptype_convertToJSON(computed_e_ezsigndocument_steptype_2);
	printf("repeating computed_e_ezsigndocument_steptype:\n%s\n", cJSON_Print(jsoncomputed_e_ezsigndocument_steptype_2));
}

int main() {
  test_computed_e_ezsigndocument_steptype(1);
  test_computed_e_ezsigndocument_steptype(0);

  printf("Hello world \n");
  return 0;
}

#endif // computed_e_ezsigndocument_steptype_MAIN
#endif // computed_e_ezsigndocument_steptype_TEST
