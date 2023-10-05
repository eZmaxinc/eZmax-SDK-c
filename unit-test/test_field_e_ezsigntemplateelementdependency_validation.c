#ifndef field_e_ezsigntemplateelementdependency_validation_TEST
#define field_e_ezsigntemplateelementdependency_validation_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define field_e_ezsigntemplateelementdependency_validation_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/field_e_ezsigntemplateelementdependency_validation.h"
field_e_ezsigntemplateelementdependency_validation_t* instantiate_field_e_ezsigntemplateelementdependency_validation(int include_optional);



field_e_ezsigntemplateelementdependency_validation_t* instantiate_field_e_ezsigntemplateelementdependency_validation(int include_optional) {
  field_e_ezsigntemplateelementdependency_validation_t* field_e_ezsigntemplateelementdependency_validation = NULL;
  if (include_optional) {
    field_e_ezsigntemplateelementdependency_validation = field_e_ezsigntemplateelementdependency_validation_create(
    );
  } else {
    field_e_ezsigntemplateelementdependency_validation = field_e_ezsigntemplateelementdependency_validation_create(
    );
  }

  return field_e_ezsigntemplateelementdependency_validation;
}


#ifdef field_e_ezsigntemplateelementdependency_validation_MAIN

void test_field_e_ezsigntemplateelementdependency_validation(int include_optional) {
    field_e_ezsigntemplateelementdependency_validation_t* field_e_ezsigntemplateelementdependency_validation_1 = instantiate_field_e_ezsigntemplateelementdependency_validation(include_optional);

	cJSON* jsonfield_e_ezsigntemplateelementdependency_validation_1 = field_e_ezsigntemplateelementdependency_validation_convertToJSON(field_e_ezsigntemplateelementdependency_validation_1);
	printf("field_e_ezsigntemplateelementdependency_validation :\n%s\n", cJSON_Print(jsonfield_e_ezsigntemplateelementdependency_validation_1));
	field_e_ezsigntemplateelementdependency_validation_t* field_e_ezsigntemplateelementdependency_validation_2 = field_e_ezsigntemplateelementdependency_validation_parseFromJSON(jsonfield_e_ezsigntemplateelementdependency_validation_1);
	cJSON* jsonfield_e_ezsigntemplateelementdependency_validation_2 = field_e_ezsigntemplateelementdependency_validation_convertToJSON(field_e_ezsigntemplateelementdependency_validation_2);
	printf("repeating field_e_ezsigntemplateelementdependency_validation:\n%s\n", cJSON_Print(jsonfield_e_ezsigntemplateelementdependency_validation_2));
}

int main() {
  test_field_e_ezsigntemplateelementdependency_validation(1);
  test_field_e_ezsigntemplateelementdependency_validation(0);

  printf("Hello world \n");
  return 0;
}

#endif // field_e_ezsigntemplateelementdependency_validation_MAIN
#endif // field_e_ezsigntemplateelementdependency_validation_TEST
