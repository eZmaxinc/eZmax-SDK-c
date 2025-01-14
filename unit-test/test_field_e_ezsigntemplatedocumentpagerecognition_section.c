#ifndef field_e_ezsigntemplatedocumentpagerecognition_section_TEST
#define field_e_ezsigntemplatedocumentpagerecognition_section_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define field_e_ezsigntemplatedocumentpagerecognition_section_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/field_e_ezsigntemplatedocumentpagerecognition_section.h"
field_e_ezsigntemplatedocumentpagerecognition_section_t* instantiate_field_e_ezsigntemplatedocumentpagerecognition_section(int include_optional);



field_e_ezsigntemplatedocumentpagerecognition_section_t* instantiate_field_e_ezsigntemplatedocumentpagerecognition_section(int include_optional) {
  field_e_ezsigntemplatedocumentpagerecognition_section_t* field_e_ezsigntemplatedocumentpagerecognition_section = NULL;
  if (include_optional) {
    field_e_ezsigntemplatedocumentpagerecognition_section = field_e_ezsigntemplatedocumentpagerecognition_section_create(
    );
  } else {
    field_e_ezsigntemplatedocumentpagerecognition_section = field_e_ezsigntemplatedocumentpagerecognition_section_create(
    );
  }

  return field_e_ezsigntemplatedocumentpagerecognition_section;
}


#ifdef field_e_ezsigntemplatedocumentpagerecognition_section_MAIN

void test_field_e_ezsigntemplatedocumentpagerecognition_section(int include_optional) {
    field_e_ezsigntemplatedocumentpagerecognition_section_t* field_e_ezsigntemplatedocumentpagerecognition_section_1 = instantiate_field_e_ezsigntemplatedocumentpagerecognition_section(include_optional);

	cJSON* jsonfield_e_ezsigntemplatedocumentpagerecognition_section_1 = field_e_ezsigntemplatedocumentpagerecognition_section_convertToJSON(field_e_ezsigntemplatedocumentpagerecognition_section_1);
	printf("field_e_ezsigntemplatedocumentpagerecognition_section :\n%s\n", cJSON_Print(jsonfield_e_ezsigntemplatedocumentpagerecognition_section_1));
	field_e_ezsigntemplatedocumentpagerecognition_section_t* field_e_ezsigntemplatedocumentpagerecognition_section_2 = field_e_ezsigntemplatedocumentpagerecognition_section_parseFromJSON(jsonfield_e_ezsigntemplatedocumentpagerecognition_section_1);
	cJSON* jsonfield_e_ezsigntemplatedocumentpagerecognition_section_2 = field_e_ezsigntemplatedocumentpagerecognition_section_convertToJSON(field_e_ezsigntemplatedocumentpagerecognition_section_2);
	printf("repeating field_e_ezsigntemplatedocumentpagerecognition_section:\n%s\n", cJSON_Print(jsonfield_e_ezsigntemplatedocumentpagerecognition_section_2));
}

int main() {
  test_field_e_ezsigntemplatedocumentpagerecognition_section(1);
  test_field_e_ezsigntemplatedocumentpagerecognition_section(0);

  printf("Hello world \n");
  return 0;
}

#endif // field_e_ezsigntemplatedocumentpagerecognition_section_MAIN
#endif // field_e_ezsigntemplatedocumentpagerecognition_section_TEST
