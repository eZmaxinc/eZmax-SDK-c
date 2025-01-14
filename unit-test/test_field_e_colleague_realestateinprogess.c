#ifndef field_e_colleague_realestateinprogess_TEST
#define field_e_colleague_realestateinprogess_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define field_e_colleague_realestateinprogess_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/field_e_colleague_realestateinprogess.h"
field_e_colleague_realestateinprogess_t* instantiate_field_e_colleague_realestateinprogess(int include_optional);



field_e_colleague_realestateinprogess_t* instantiate_field_e_colleague_realestateinprogess(int include_optional) {
  field_e_colleague_realestateinprogess_t* field_e_colleague_realestateinprogess = NULL;
  if (include_optional) {
    field_e_colleague_realestateinprogess = field_e_colleague_realestateinprogess_create(
    );
  } else {
    field_e_colleague_realestateinprogess = field_e_colleague_realestateinprogess_create(
    );
  }

  return field_e_colleague_realestateinprogess;
}


#ifdef field_e_colleague_realestateinprogess_MAIN

void test_field_e_colleague_realestateinprogess(int include_optional) {
    field_e_colleague_realestateinprogess_t* field_e_colleague_realestateinprogess_1 = instantiate_field_e_colleague_realestateinprogess(include_optional);

	cJSON* jsonfield_e_colleague_realestateinprogess_1 = field_e_colleague_realestateinprogess_convertToJSON(field_e_colleague_realestateinprogess_1);
	printf("field_e_colleague_realestateinprogess :\n%s\n", cJSON_Print(jsonfield_e_colleague_realestateinprogess_1));
	field_e_colleague_realestateinprogess_t* field_e_colleague_realestateinprogess_2 = field_e_colleague_realestateinprogess_parseFromJSON(jsonfield_e_colleague_realestateinprogess_1);
	cJSON* jsonfield_e_colleague_realestateinprogess_2 = field_e_colleague_realestateinprogess_convertToJSON(field_e_colleague_realestateinprogess_2);
	printf("repeating field_e_colleague_realestateinprogess:\n%s\n", cJSON_Print(jsonfield_e_colleague_realestateinprogess_2));
}

int main() {
  test_field_e_colleague_realestateinprogess(1);
  test_field_e_colleague_realestateinprogess(0);

  printf("Hello world \n");
  return 0;
}

#endif // field_e_colleague_realestateinprogess_MAIN
#endif // field_e_colleague_realestateinprogess_TEST
