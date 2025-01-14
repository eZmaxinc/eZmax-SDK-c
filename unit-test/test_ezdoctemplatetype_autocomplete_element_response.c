#ifndef ezdoctemplatetype_autocomplete_element_response_TEST
#define ezdoctemplatetype_autocomplete_element_response_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define ezdoctemplatetype_autocomplete_element_response_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/ezdoctemplatetype_autocomplete_element_response.h"
ezdoctemplatetype_autocomplete_element_response_t* instantiate_ezdoctemplatetype_autocomplete_element_response(int include_optional);



ezdoctemplatetype_autocomplete_element_response_t* instantiate_ezdoctemplatetype_autocomplete_element_response(int include_optional) {
  ezdoctemplatetype_autocomplete_element_response_t* ezdoctemplatetype_autocomplete_element_response = NULL;
  if (include_optional) {
    ezdoctemplatetype_autocomplete_element_response = ezdoctemplatetype_autocomplete_element_response_create(
      7,
      "Real Estate",
      true
    );
  } else {
    ezdoctemplatetype_autocomplete_element_response = ezdoctemplatetype_autocomplete_element_response_create(
      7,
      "Real Estate",
      true
    );
  }

  return ezdoctemplatetype_autocomplete_element_response;
}


#ifdef ezdoctemplatetype_autocomplete_element_response_MAIN

void test_ezdoctemplatetype_autocomplete_element_response(int include_optional) {
    ezdoctemplatetype_autocomplete_element_response_t* ezdoctemplatetype_autocomplete_element_response_1 = instantiate_ezdoctemplatetype_autocomplete_element_response(include_optional);

	cJSON* jsonezdoctemplatetype_autocomplete_element_response_1 = ezdoctemplatetype_autocomplete_element_response_convertToJSON(ezdoctemplatetype_autocomplete_element_response_1);
	printf("ezdoctemplatetype_autocomplete_element_response :\n%s\n", cJSON_Print(jsonezdoctemplatetype_autocomplete_element_response_1));
	ezdoctemplatetype_autocomplete_element_response_t* ezdoctemplatetype_autocomplete_element_response_2 = ezdoctemplatetype_autocomplete_element_response_parseFromJSON(jsonezdoctemplatetype_autocomplete_element_response_1);
	cJSON* jsonezdoctemplatetype_autocomplete_element_response_2 = ezdoctemplatetype_autocomplete_element_response_convertToJSON(ezdoctemplatetype_autocomplete_element_response_2);
	printf("repeating ezdoctemplatetype_autocomplete_element_response:\n%s\n", cJSON_Print(jsonezdoctemplatetype_autocomplete_element_response_2));
}

int main() {
  test_ezdoctemplatetype_autocomplete_element_response(1);
  test_ezdoctemplatetype_autocomplete_element_response(0);

  printf("Hello world \n");
  return 0;
}

#endif // ezdoctemplatetype_autocomplete_element_response_MAIN
#endif // ezdoctemplatetype_autocomplete_element_response_TEST
