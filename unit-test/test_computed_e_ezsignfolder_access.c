#ifndef computed_e_ezsignfolder_access_TEST
#define computed_e_ezsignfolder_access_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define computed_e_ezsignfolder_access_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/computed_e_ezsignfolder_access.h"
computed_e_ezsignfolder_access_t* instantiate_computed_e_ezsignfolder_access(int include_optional);



computed_e_ezsignfolder_access_t* instantiate_computed_e_ezsignfolder_access(int include_optional) {
  computed_e_ezsignfolder_access_t* computed_e_ezsignfolder_access = NULL;
  if (include_optional) {
    computed_e_ezsignfolder_access = computed_e_ezsignfolder_access_create(
    );
  } else {
    computed_e_ezsignfolder_access = computed_e_ezsignfolder_access_create(
    );
  }

  return computed_e_ezsignfolder_access;
}


#ifdef computed_e_ezsignfolder_access_MAIN

void test_computed_e_ezsignfolder_access(int include_optional) {
    computed_e_ezsignfolder_access_t* computed_e_ezsignfolder_access_1 = instantiate_computed_e_ezsignfolder_access(include_optional);

	cJSON* jsoncomputed_e_ezsignfolder_access_1 = computed_e_ezsignfolder_access_convertToJSON(computed_e_ezsignfolder_access_1);
	printf("computed_e_ezsignfolder_access :\n%s\n", cJSON_Print(jsoncomputed_e_ezsignfolder_access_1));
	computed_e_ezsignfolder_access_t* computed_e_ezsignfolder_access_2 = computed_e_ezsignfolder_access_parseFromJSON(jsoncomputed_e_ezsignfolder_access_1);
	cJSON* jsoncomputed_e_ezsignfolder_access_2 = computed_e_ezsignfolder_access_convertToJSON(computed_e_ezsignfolder_access_2);
	printf("repeating computed_e_ezsignfolder_access:\n%s\n", cJSON_Print(jsoncomputed_e_ezsignfolder_access_2));
}

int main() {
  test_computed_e_ezsignfolder_access(1);
  test_computed_e_ezsignfolder_access(0);

  printf("Hello world \n");
  return 0;
}

#endif // computed_e_ezsignfolder_access_MAIN
#endif // computed_e_ezsignfolder_access_TEST
