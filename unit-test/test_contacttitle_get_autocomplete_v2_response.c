#ifndef contacttitle_get_autocomplete_v2_response_TEST
#define contacttitle_get_autocomplete_v2_response_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define contacttitle_get_autocomplete_v2_response_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/contacttitle_get_autocomplete_v2_response.h"
contacttitle_get_autocomplete_v2_response_t* instantiate_contacttitle_get_autocomplete_v2_response(int include_optional);

#include "test_common_response_obj_debug_payload.c"
#include "test_common_response_obj_debug.c"
#include "test_contacttitle_get_autocomplete_v2_response_m_payload.c"


contacttitle_get_autocomplete_v2_response_t* instantiate_contacttitle_get_autocomplete_v2_response(int include_optional) {
  contacttitle_get_autocomplete_v2_response_t* contacttitle_get_autocomplete_v2_response = NULL;
  if (include_optional) {
    contacttitle_get_autocomplete_v2_response = contacttitle_get_autocomplete_v2_response_create(
       // false, not to have infinite recursion
      instantiate_common_response_obj_debug_payload(0),
      {"sMemoryUsage":"11,923MB","sRunTime":"0.6084s","iSQLSelects":3,"iSQLQueries":6,"a_objSQLQuery":[{"sQuery":"SELECT * FROM table","fDuration":1.0E-4},{"sQuery":"SELECT * FROM table","fDuration":1.0E-4}]},
       // false, not to have infinite recursion
      instantiate_contacttitle_get_autocomplete_v2_response_m_payload(0)
    );
  } else {
    contacttitle_get_autocomplete_v2_response = contacttitle_get_autocomplete_v2_response_create(
      NULL,
      {"sMemoryUsage":"11,923MB","sRunTime":"0.6084s","iSQLSelects":3,"iSQLQueries":6,"a_objSQLQuery":[{"sQuery":"SELECT * FROM table","fDuration":1.0E-4},{"sQuery":"SELECT * FROM table","fDuration":1.0E-4}]},
      NULL
    );
  }

  return contacttitle_get_autocomplete_v2_response;
}


#ifdef contacttitle_get_autocomplete_v2_response_MAIN

void test_contacttitle_get_autocomplete_v2_response(int include_optional) {
    contacttitle_get_autocomplete_v2_response_t* contacttitle_get_autocomplete_v2_response_1 = instantiate_contacttitle_get_autocomplete_v2_response(include_optional);

	cJSON* jsoncontacttitle_get_autocomplete_v2_response_1 = contacttitle_get_autocomplete_v2_response_convertToJSON(contacttitle_get_autocomplete_v2_response_1);
	printf("contacttitle_get_autocomplete_v2_response :\n%s\n", cJSON_Print(jsoncontacttitle_get_autocomplete_v2_response_1));
	contacttitle_get_autocomplete_v2_response_t* contacttitle_get_autocomplete_v2_response_2 = contacttitle_get_autocomplete_v2_response_parseFromJSON(jsoncontacttitle_get_autocomplete_v2_response_1);
	cJSON* jsoncontacttitle_get_autocomplete_v2_response_2 = contacttitle_get_autocomplete_v2_response_convertToJSON(contacttitle_get_autocomplete_v2_response_2);
	printf("repeating contacttitle_get_autocomplete_v2_response:\n%s\n", cJSON_Print(jsoncontacttitle_get_autocomplete_v2_response_2));
}

int main() {
  test_contacttitle_get_autocomplete_v2_response(1);
  test_contacttitle_get_autocomplete_v2_response(0);

  printf("Hello world \n");
  return 0;
}

#endif // contacttitle_get_autocomplete_v2_response_MAIN
#endif // contacttitle_get_autocomplete_v2_response_TEST
