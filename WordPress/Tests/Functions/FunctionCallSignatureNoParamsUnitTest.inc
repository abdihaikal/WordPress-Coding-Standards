<?php

ms_cookie_constants(); // OK.
ms_cookie_constants(  ); // Bad.
ms_cookie_constants(      ); // Bad.

// These should be ignored as these are handled by the PEAR.Functions.FunctionCallSignature sniff.
ms_cookie_constants($something);
ms_cookie_constants( $something );
