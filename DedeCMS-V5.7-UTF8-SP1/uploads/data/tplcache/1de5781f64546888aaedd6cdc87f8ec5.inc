<div class="mod">
                    <div class="title"><strong><a href="{dede:field name='typeurl'/}">{dede:field name='typename'/}</a></strong> <a class="more" href="{dede:field name='typeurl'/}">更多...</a></div>
                    <div class="mod_con">
                        <ul class="list_item">
                            {dede:arclist titlelen='42' row='10'}    
                             <li><a href="[field:arcurl /]" class="pic">
                                 <img src="[field:litpic/]" alt="[field:title function='html2text(@me)'/]" /><span class="countdown">[field:title /]</span></a>
                             </li>
                            {/dede:arclist}
                        </ul>
                    </div>
                </div>