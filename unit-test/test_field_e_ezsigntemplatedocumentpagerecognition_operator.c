#ifndef field_e_ezsigntemplatedocumentpagerecognition_operator_TEST
#define field_e_ezsigntemplatedocumentpagerecognition_operator_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define field_e_ezsigntemplatedocumentpagerecognition_operator_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/field_e_ezsigntemplatedocumentpagerecognition_operator.h"
field_e_ezsigntemplatedocumentpagerecognition_operator_t* instantiate_field_e_ezsigntemplatedocumentpagerecognition_operator(int include_optional);



field_e_ezsigntemplatedocumentpagerecognition_operator_t* instantiate_field_e_ezsigntemplatedocumentpagerecognition_operator(int include_optional) {
  field_e_ezsigntemplatedocumentpagerecognition_operator_t* field_e_ezsigntemplatedocumentpagerecognition_operator = NULL;
  if (include_optional) {
    field_e_ezsigntemplatedocumentpagerecognition_operator = field_e_ezsigntemplatedocumentpagerecognition_operator_create(
    );
  } else {
    field_e_ezsigntemplatedocumentpagerecognition_operator = field_e_ezsigntemplatedocumentpagerecognition_operator_create(
    );
  }

  return field_e_ezsigntemplatedocumentpagerecognition_operator;
}


#ifdef field_e_ezsigntemplatedocumentpagerecognition_operator_MAIN

void test_field_e_ezsigntemplatedocumentpagerecognition_operator(int include_optional) {
    field_e_ezsigntemplatedocumentpagerecognition_operator_t* field_e_ezsigntemplatedocumentpagerecognition_operator_1 = instantiate_field_e_ezsigntemplatedocumentpagerecognition_operator(include_optional);

	cJSON* jsonfield_e_ezsigntemplatedocumentpagerecognition_operator_1 = field_e_ezsigntemplatedocumentpagerecognition_operator_convertToJSON(field_e_ezsigntemplatedocumentpagerecognition_operator_1);
	printf("field_e_ezsigntemplatedocumentpagerecognition_operator :\n%s\n", cJSON_Print(jsonfield_e_ezsigntemplatedocumentpagerecognition_operator_1));
	field_e_ezsigntemplatedocumentpagerecognition_operator_t* field_e_ezsigntemplatedocumentpagerecognition_operator_2 = field_e_ezsigntemplatedocumentpagerecognition_operator_parseFromJSON(jsonfield_e_ezsigntemplatedocumentpagerecognition_operator_1);
	cJSON* jsonfield_e_ezsigntemplatedocumentpagerecognition_operator_2 = field_e_ezsigntemplatedocumentpagerecognition_operator_convertToJSON(field_e_ezsigntemplatedocumentpagerecognition_operator_2);
	printf("repeating field_e_ezsigntemplatedocumentpagerecognition_operator:\n%s\n", cJSON_Print(jsonfield_e_ezsigntemplatedocumentpagerecognition_operator_2));
}

int main() {
  test_field_e_ezsigntemplatedocumentpagerecognition_operator(1);
  test_field_e_ezsigntemplatedocumentpagerecognition_operator(0);

  printf("Hello world \n");
  return 0;
}

#endif // field_e_ezsigntemplatedocumentpagerecognition_operator_MAIN
#endif // field_e_ezsigntemplatedocumentpagerecognition_operator_TEST
