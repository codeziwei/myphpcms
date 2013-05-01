<div class="mod">
                <div class="title"><strong><a href="{dede:field name='typeurl'/}">{dede:field name='typename'/}</a></strong> <a class="more" href="{dede:field name='typeurl'/}">更多...</a></div>
                <div class="mod_con">
                    <ul class="list_item">
<!--                         {dede:arclist row='4' type='image.'}
           <li><a class="pic" href="[field:arcurl/]" title="[field:title function='html2text(@me)' /]"><img src="[field:litpic/]" alt="[field:title function='html2text(@me)'/]"/><span class="countdown">休闲西服01</span></a></li>
		{/dede:arclist} 
                        {dede:list pagesize='10'}   
				    <li>
					    <div class="left_logo"> [field:array runphp='yes']@me = (empty(@me['litpic']) ? "" : "<a href='{@me['arcurl']}' class='preview'><img src='{@me['litpic']}' height='72' width='130'/></a>"); [/field:array]</div>

					</li>
					{/dede:list}-->


<!--                         {dede:list pagesize='10'}   
				    <li>
					    <div class="left_logo"> [field:array runphp='yes']@me = (empty(@me['litpic']) ? "" : "<a href='{@me['arcurl']}' class='preview'><img src='{@me['litpic']}' height='72' width='130'/></a>"); [/field:array]</div>
						<div class="rightcon">
						    <div class="tit"><a href="[field:arcurl/]"><span class="bt">[field:title/]</span></a><span class="date">[field:pubdate function="GetDateTimeMK(@me)"/]</span></div>
							<div class="con">[field:description/]...</div>
						</div>
					</li>
					{/dede:list}-->
                         {dede:arclist titlelen='60' row='8'}
      <li><a href="[field:arcurl /]">[field:title /]</a></li>
      {/dede:arclist}
                    </ul>
                    


                </div>
            </div>