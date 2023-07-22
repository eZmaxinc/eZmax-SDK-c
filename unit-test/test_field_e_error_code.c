#ifndef field_e_error_code_TEST
#define field_e_error_code_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define field_e_error_code_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/field_e_error_code.h"
field_e_error_code_t* instantiate_field_e_error_code(int include_optional);



field_e_error_code_t* instantiate_field_e_error_code(int include_optional) {
  field_e_error_code_t* field_e_error_code = NULL;
  if (include_optional) {
    field_e_error_code = field_e_error_code_create(
    );
  } else {
    field_e_error_code = field_e_error_code_create(
    );
  }

  return field_e_error_code;
}


#ifdef field_e_error_code_MAIN

void test_field_e_error_code(int include_optional) {
    field_e_error_code_t* field_e_error_code_1 = instantiate_field_e_error_code(include_optional);

	cJSON* jsonfield_e_error_code_1 = field_e_error_code_convertToJSON(field_e_error_code_1);
	printf("field_e_error_code :\n%s\n", cJSON_Print(jsonfield_e_error_code_1));
	field_e_error_code_t* field_e_error_code_2 = field_e_error_code_parseFromJSON(jsonfield_e_error_code_1);
	cJSON* jsonfield_e_error_code_2 = field_e_error_code_convertToJSON(field_e_error_code_2);
	printf("repeating field_e_error_code:\n%s\n", cJSON_Print(jsonfield_e_error_code_2));
}

int main() {
  test_field_e_error_code(1);
  test_field_e_error_code(0);

  printf("Hello world \n");
  return 0;
}

#endif // field_e_error_code_MAIN
#endif // field_e_error_code_TEST
