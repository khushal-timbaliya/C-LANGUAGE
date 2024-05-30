$(document).ready(function(){
$(window).scroll(function(){
    if($(document).scrollTop()>100){
        $("nav").css("background-color","#303030")
        $("nav").css("box-shadow","rgba(0, 0, 0, 0.35) 0px 5px 15px")
    }
    else{
        $("nav").css("background-color","transparent")
        $("nav").css("box-shadow","none")
    }

})
})
