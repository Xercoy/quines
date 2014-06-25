/* 
Corey Prak
corey@prak.me

Explanation can be found at the bottom of
http://learngowith.me/quine/ 
*/

package main;import"fmt";func main(){s:=`package main;import"fmt";func main(){s:=%c%s%c;fmt.Printf(s,96,s,96)}`;fmt.Printf(s,96,s,96)}