#ifndef field_e_colleague_ezsign_TEST
#define field_e_colleague_ezsign_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define field_e_colleague_ezsign_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/field_e_colleague_ezsign.h"
field_e_colleague_ezsign_t* instantiate_field_e_colleague_ezsign(int include_optional);



field_e_colleague_ezsign_t* instantiate_field_e_colleague_ezsign(int include_optional) {
  field_e_colleague_ezsign_t* field_e_colleague_ezsign = NULL;
  if (include_optional) {
    field_e_colleague_ezsign = field_e_colleague_ezsign_create(
    );
  } else {
    field_e_colleague_ezsign = field_e_colleague_ezsign_create(
    );
  }

  return field_e_colleague_ezsign;
}


#ifdef field_e_colleague_ezsign_MAIN

void test_field_e_colleague_ezsign(int include_optional) {
    field_e_colleague_ezsign_t* field_e_colleague_ezsign_1 = instantiate_field_e_colleague_ezsign(include_optional);

	cJSON* jsonfield_e_colleague_ezsign_1 = field_e_colleague_ezsign_convertToJSON(field_e_colleague_ezsign_1);
	printf("field_e_colleague_ezsign :\n%s\n", cJSON_Print(jsonfield_e_colleague_ezsign_1));
	field_e_colleague_ezsign_t* field_e_colleague_ezsign_2 = field_e_colleague_ezsign_parseFromJSON(jsonfield_e_colleague_ezsign_1);
	cJSON* jsonfield_e_colleague_ezsign_2 = field_e_colleague_ezsign_convertToJSON(field_e_colleague_ezsign_2);
	printf("repeating field_e_colleague_ezsign:\n%s\n", cJSON_Print(jsonfield_e_colleague_ezsign_2));
}

int main() {
  test_field_e_colleague_ezsign(1);
  test_field_e_colleague_ezsign(0);

  printf("Hello world \n");
  return 0;
}

#endif // field_e_colleague_ezsign_MAIN
#endif // field_e_colleague_ezsign_TEST
