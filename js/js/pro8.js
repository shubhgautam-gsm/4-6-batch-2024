function myFunction() {
    let x = document.getElementsByClassName("demo")

    let start = document.getElementById("vol").value
    
    let end = document.getElementById("vol2").value
    
   // let user_choose =document.getElementById("vol3").value
  //  let user_choose =prompt('write color name:')

    for (let i = start; i <= end ; i++) {
        let user_choose =prompt('write color name:') // repeat asking choice
        // DYANMIC CODE
        x[i].style.color = user_choose;
        //      x[i].style.color = "rgb(255,255,255)
    }
}



function myFunction() {
    let x = document.getElementsByClassName("demo")

    let start = document.getElementById("vol").value
    
    let end = document.getElementById("vol2").value

    // let user_color =document.getElementById("vol3").value
    
   // let user_choose =document.getElementById("vol3").value
  //  let user_choose =prompt('write color name:')

    for (let i = start; i <= end ; i++) {
        // let user_color =document.getElementById("vol3").value
        let user_choose =prompt('write color name:') // repeat asking choice
        // let user_choose =user_color
        // DYANMIC CODE
        x[i].style.color = user_choose;
        //      x[i].style.color = "rgb(255,255,255)
    }
}