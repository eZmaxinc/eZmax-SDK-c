#ifndef field_e_attachment_documenttype_TEST
#define field_e_attachment_documenttype_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define field_e_attachment_documenttype_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/field_e_attachment_documenttype.h"
field_e_attachment_documenttype_t* instantiate_field_e_attachment_documenttype(int include_optional);



field_e_attachment_documenttype_t* instantiate_field_e_attachment_documenttype(int include_optional) {
  field_e_attachment_documenttype_t* field_e_attachment_documenttype = NULL;
  if (include_optional) {
    field_e_attachment_documenttype = field_e_attachment_documenttype_create(
    );
  } else {
    field_e_attachment_documenttype = field_e_attachment_documenttype_create(
    );
  }

  return field_e_attachment_documenttype;
}


#ifdef field_e_attachment_documenttype_MAIN

void test_field_e_attachment_documenttype(int include_optional) {
    field_e_attachment_documenttype_t* field_e_attachment_documenttype_1 = instantiate_field_e_attachment_documenttype(include_optional);

	cJSON* jsonfield_e_attachment_documenttype_1 = field_e_attachment_documenttype_convertToJSON(field_e_attachment_documenttype_1);
	printf("field_e_attachment_documenttype :\n%s\n", cJSON_Print(jsonfield_e_attachment_documenttype_1));
	field_e_attachment_documenttype_t* field_e_attachment_documenttype_2 = field_e_attachment_documenttype_parseFromJSON(jsonfield_e_attachment_documenttype_1);
	cJSON* jsonfield_e_attachment_documenttype_2 = field_e_attachment_documenttype_convertToJSON(field_e_attachment_documenttype_2);
	printf("repeating field_e_attachment_documenttype:\n%s\n", cJSON_Print(jsonfield_e_attachment_documenttype_2));
}

int main() {
  test_field_e_attachment_documenttype(1);
  test_field_e_attachment_documenttype(0);

  printf("Hello world \n");
  return 0;
}

#endif // field_e_attachment_documenttype_MAIN
#endif // field_e_attachment_documenttype_TEST
