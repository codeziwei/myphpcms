<div class="mod">
                <div class="title"><strong><a href="{dede:field name='typeurl'/}">{dede:field name='typename'/}</a></strong> <a class="more" href="{dede:field name='typeurl'/}">更多...</a></div>
                <div class="mod_con">
                    <ul class="list_item">

                         {dede:list pagesize='10'}   
				    <li>
					    <div class="left_logo"> [field:array runphp='yes']@me = (empty(@me['litpic']) ? "" : "<a href='{@me['arcurl']}' class='preview'><img src='{@me['litpic']}' height='72' width='130'/></a>"); [/field:array]</div>
						<div class="rightcon">
						    <div class="tit"><a href="[field:arcurl/]"><span class="bt">[field:title/]</span></a><span class="date">[field:pubdate function="GetDateTimeMK(@me)"/]</span></div>
							<div class="con">[field:description/]...</div>
						</div>
					</li>

<!--                     <li><a class="pic" href="#">
                            <img src="images/zhengzhuang.png" width="155" height="160" border="0" /><span class="countdown">休闲西服01</span></a></li>-->

					{/dede:list}
                    </ul>
                    


                </div>
            </div>