#ifndef field_e_ezsigntemplatesignature_positioningoccurence_TEST
#define field_e_ezsigntemplatesignature_positioningoccurence_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define field_e_ezsigntemplatesignature_positioningoccurence_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/field_e_ezsigntemplatesignature_positioningoccurence.h"
field_e_ezsigntemplatesignature_positioningoccurence_t* instantiate_field_e_ezsigntemplatesignature_positioningoccurence(int include_optional);



field_e_ezsigntemplatesignature_positioningoccurence_t* instantiate_field_e_ezsigntemplatesignature_positioningoccurence(int include_optional) {
  field_e_ezsigntemplatesignature_positioningoccurence_t* field_e_ezsigntemplatesignature_positioningoccurence = NULL;
  if (include_optional) {
    field_e_ezsigntemplatesignature_positioningoccurence = field_e_ezsigntemplatesignature_positioningoccurence_create(
    );
  } else {
    field_e_ezsigntemplatesignature_positioningoccurence = field_e_ezsigntemplatesignature_positioningoccurence_create(
    );
  }

  return field_e_ezsigntemplatesignature_positioningoccurence;
}


#ifdef field_e_ezsigntemplatesignature_positioningoccurence_MAIN

void test_field_e_ezsigntemplatesignature_positioningoccurence(int include_optional) {
    field_e_ezsigntemplatesignature_positioningoccurence_t* field_e_ezsigntemplatesignature_positioningoccurence_1 = instantiate_field_e_ezsigntemplatesignature_positioningoccurence(include_optional);

	cJSON* jsonfield_e_ezsigntemplatesignature_positioningoccurence_1 = field_e_ezsigntemplatesignature_positioningoccurence_convertToJSON(field_e_ezsigntemplatesignature_positioningoccurence_1);
	printf("field_e_ezsigntemplatesignature_positioningoccurence :\n%s\n", cJSON_Print(jsonfield_e_ezsigntemplatesignature_positioningoccurence_1));
	field_e_ezsigntemplatesignature_positioningoccurence_t* field_e_ezsigntemplatesignature_positioningoccurence_2 = field_e_ezsigntemplatesignature_positioningoccurence_parseFromJSON(jsonfield_e_ezsigntemplatesignature_positioningoccurence_1);
	cJSON* jsonfield_e_ezsigntemplatesignature_positioningoccurence_2 = field_e_ezsigntemplatesignature_positioningoccurence_convertToJSON(field_e_ezsigntemplatesignature_positioningoccurence_2);
	printf("repeating field_e_ezsigntemplatesignature_positioningoccurence:\n%s\n", cJSON_Print(jsonfield_e_ezsigntemplatesignature_positioningoccurence_2));
}

int main() {
  test_field_e_ezsigntemplatesignature_positioningoccurence(1);
  test_field_e_ezsigntemplatesignature_positioningoccurence(0);

  printf("Hello world \n");
  return 0;
}

#endif // field_e_ezsigntemplatesignature_positioningoccurence_MAIN
#endif // field_e_ezsigntemplatesignature_positioningoccurence_TEST
