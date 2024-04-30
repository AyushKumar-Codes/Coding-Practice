import { Component } from '@angular/core';
import $ from 'jquery';
@Component({
  selector: 'app-change-pass',
  templateUrl: './change-pass.component.html',
  styleUrl: './change-pass.component.css'
})
export class ChangePassComponent {
  ngOnInit(){
    $(document).ready(()=>{
      $("#sidebar-toggle").click(()=>{
        $("#sidebar").toggleClass("collapsed");
      });
      $("#submit").click(()=>{
        const prevPass = $("#prevPass").val();
        const  password = $("#password").val();
        if(prevPass == "" || password == ""){
          $("#err").html("Please enter all fields!");
        }else if (prevPass === password){
          $("#err").html("New Password can't be Same as Previous");
        }
        else{
          alert("Password Changed");
        }
      });
    })
    
  }
}
