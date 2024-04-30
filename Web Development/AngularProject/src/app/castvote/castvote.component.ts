import { Component } from '@angular/core';
import $ from 'jquery';
@Component({
  selector: 'app-castvote',
  templateUrl: './castvote.component.html',
  styleUrl: './castvote.component.css'
})
export class CastvoteComponent {
  ngOnInit(){
    $(document).ready(()=>{
      $("#sidebar-toggle").click(()=>{
        $("#sidebar").toggleClass("collapsed");
      });
    })
    $(".btn").click(()=>{
      $("#card").html(
        ` <span style="margin-left: 35%;font-size: 40px;font-family: 'Century Schoolbook';color: #20c997"> You Have Voted</span>
        <br>
         <img src="assets/img/done.gif" height="400px" width="500px" style="margin-left: 27.8%">
        `
    );
    });
  }
}
