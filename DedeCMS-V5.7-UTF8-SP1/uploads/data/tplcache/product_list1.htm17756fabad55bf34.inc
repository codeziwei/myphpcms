<?php
$z[0]=Array("field","",265,287);
$z[0][4]['name']="typename";
$z[1]=Array("include","",573,608);
$z[1][4]['filename']="head.htm";
$z[2]=Array("include","",646,689);
$z[2][4]['filename']="product_left.htm";
$z[3]=Array("channelartlist","\r\n                <div class=\"mod\">\r\n                    <div class=\"title\"><strong><a href=\"{dede:field name='typeurl'/}\">{dede:field name='typename'/}</a></strong> <a class=\"more\" href=\"{dede:field name='typeurl'/}\">更多...</a></div>\r\n                    <div class=\"mod_con\">\r\n                        <ul class=\"list_item\">\r\n                            {dede:arclist titlelen='42' row='10'}    \r\n                             <li><a href=\"[field:arcurl /]\" class=\"pic\">\r\n                                 <img src=\"[field:litpic/]\" alt=\"[field:title function='html2text(@me)'/]\" /><span class=\"countdown\">[field:title /]</span></a>\r\n                             </li>\r\n                            {/dede:arclist}\r\n                        </ul>\r\n                    </div>\r\n                </div>\r\n                ",840,1699);
$z[4]=Array("global","if(@me%2==0) @me =\" <li class='item  cur'> \"; else @me = \" <li class='item'> \"; ",1772,1907);
$z[4][4]['name']="itemindex";
$z[4][4]['runphp']="yes";
$z[5]=Array("include","",1978,2015);
$z[5][4]['filename']="footer.htm";

?>